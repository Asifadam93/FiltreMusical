#include "music.h"
#include "ui_music.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QDebug>
#include <QSettings>
#include <QList>
#include <QtCore>

Music::Music(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Music)
{
    ui->setupUi(this);
    readSettings();

    for(int i=0;i<MaxRecenFiles;i++){
        recentFilesActs[i] = new QAction(this);
        recentFilesActs[i]->setVisible(false);
        connect(recentFilesActs[i],SIGNAL(triggered()),this,SLOT(openRecentFile()));
        ui->menuOpen_Recent_Files->addAction(recentFilesActs[i]);
    }

    updateRecentFileActions();
}


bool Music::on_actionSave_as_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(
                this,
                "Music - Save as",
                "/home/luis/Documents",
                "Text Files (*.txt);;All Files (*.*)");
    if(!fileName.isEmpty()){
        curFile = fileName;
        return saveFile(fileName);
    }
    return false;
}

bool Music::saveFile(const QString &fileName)
{
    QFile file(fileName);
    if(file.open(QFile::WriteOnly)){
        file.write(ui->plainTextEdit->toPlainText().toLatin1());
        setCurrentFile(fileName);
        setWindowTitle(tr("Music - %1[*]").arg(QFileInfo(curFile).fileName()));
        ui->plainTextEdit->document()->setModified(false);
        return true;
    }else{
        QMessageBox::warning(
                    this,
                    "Music",
                    tr("Impossible de lire le fichier %1.\nError: %2")
                    .arg(curFile)
                    .arg(file.errorString()));
        return false;
    }
}

bool Music::maybeSave()
{
    if(ui->plainTextEdit->document()->isModified()){
        QMessageBox::StandardButton ret =
                QMessageBox::warning(
                    this,
                    "Music",
                    tr("The Document has been Modified"
                    "\nDo you want to save your changes?"),
                    QMessageBox::Yes | QMessageBox::No |QMessageBox::Cancel);
        if(ret == QMessageBox::Yes){
            return on_action_Save_triggered();
        }else if(ret == QMessageBox::Cancel)
            return false;
    }
    return true;
}

void Music::readSettings()
{
    QSettings settings("Nicatronica","Music");
    QPoint pos = settings.value("pos",QPoint(200,200)).toPoint();
    QSize size = settings.value("size",QSize(400,400)).toSize();
    resize(size);
    move(pos);
}

void Music::writeSettings()
{
    QSettings settings("Nicatronica","Music");
    settings.setValue("pos",pos());
    settings.setValue("size",size());
}

void Music::setCurrentFile(const QString &fileName)
{
    curFile = fileName;

    setWindowTitle(tr("Music - %1[*]").arg(QFileInfo(curFile).fileName()));

    QSettings settings;
    QStringList recentFilesList = settings.value("recentFilesList").toStringList();
    recentFilesList.removeAll(fileName);
    recentFilesList.prepend(fileName);
    while(recentFilesList.size() > MaxRecenFiles)
        recentFilesList.removeLast();

    settings.setValue("recentFilesList",recentFilesList);
    updateRecentFileActions();
}

bool Music::on_action_Save_triggered()
{
    if(curFile.isEmpty())
        return on_actionSave_as_triggered();
    else
        return saveFile(curFile);
}

void Music::on_action_Open_triggered()
{

    if(maybeSave()){
        QString fileName = QFileDialog::getOpenFileName(
                    this,
                    "Music - Ouvrir Fichier",
                    QDir::homePath(),
                    "Music Files (*.mp3 *.wav);;All Files (*.*)");
        loadFile(fileName);
    }

}

void Music::closeEvent(QCloseEvent *event)
{
    if(maybeSave()){
        writeSettings();
        event->accept();
    }else{
        event->ignore();
    }
}

void Music::openRecentFile()
{
    QAction *action = qobject_cast<QAction *>(sender());
    if(action){
        loadFile(action->data().toString());
    }
}


void Music::updateRecentFileActions()
{
    QSettings settings;
    QStringList recentFilesList = settings.value("recentFilesList").toStringList();

    int numRecentFiles = qMin(recentFilesList.size(),int(MaxRecenFiles));

    for(int i = 0; i< numRecentFiles; ++i){
        QString text = tr("&%1 %2")
                .arg(i+1)
                .arg(QFileInfo(recentFilesList[i]).fileName());
        recentFilesActs[i]->setText(text);
        recentFilesActs[i]->setData(recentFilesList[i]);
        recentFilesActs[i]->setVisible(true);
    }
    for(int j= numRecentFiles; j>MaxRecenFiles;j++){
        recentFilesActs[j]->setVisible(false);
    }
}

void Music::loadFile(const QString &fileName)
{
    if(!fileName.isEmpty()){
        QFile file(fileName);
        if(file.open(QFile::ReadOnly)){

            ui->plainTextEdit->setPlainText(fileName);
            setCurrentFile(fileName);

            this->fileName = fileName;

        }else{
            QMessageBox::warning(
                        this,
                        "Music",
                        tr("Impossible d'ouvrir le fichier' %1.\nError: %2")
                        .arg(fileName)
                        .arg(file.errorString()));
        }
    }
}


void Music::on_pushButtonPlay_clicked()
{
    mPlayAudio.playSong(this->fileName.toStdString().c_str());
    /*QMessageBox::warning(
                this,
                "Music Play",
                tr("Appuie du bouton play' %1.")
                .arg("fileName")
                .arg("file.errorString()"));

    QMessageBox::information(
                this,
                "Music Play",
                tr("Appuie du bouton play' %1.")
                .arg("fileName")
                .arg("file.errorString()"));*/

    //QMessageBox::information(this, tr("Info"), "Lecture en cours");

}

void Music::on_pushButtonStop_clicked()
{
    mPlayAudio.stopSong();
    /*QMessageBox::warning(
                this,
                "Music Stop",
                tr("Appuie du bouton play' %1.")
                .arg("fileName")
                .arg("file.errorString()"));*/

    //QMessageBox::information(this, tr("Info"), "Music");
}

void Music::on_radioButtonFiltre_clicked(bool checked)
{
    if (checked == true) {
        mPlayAudio.applyFilter();
        /*QMessageBox::warning(
                    this,
                    "Filtre Check",
                    tr("La case est coché' %1.")
                    .arg("fileName")
                    .arg("file.errorString()"));*/
        QMessageBox::information(this, tr("Info"), "Filter appliqué");
    }
    else {
        mPlayAudio.stopFilter();
        /*QMessageBox::warning(
                    this,
                    "Filtre déchecké",
                    tr("La case est décoché' %1.")
                    .arg("fileName")
                    .arg("file.errorString()"));*/
        QMessageBox::information(this, tr("Info"), "Filter annulé");
    }
}
