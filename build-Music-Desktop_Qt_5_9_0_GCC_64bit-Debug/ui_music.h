/********************************************************************************
** Form generated from reading UI file 'music.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSIC_H
#define UI_MUSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Music
{
public:
    QAction *action_Open;
    QAction *action_Save;
    QAction *actionSave_as;
    QAction *action_Exit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QRadioButton *radioButtonFiltre;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonStop;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menuOpen_Recent_Files;
    QMenu *menu_Edit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Music)
    {
        if (Music->objectName().isEmpty())
            Music->setObjectName(QStringLiteral("Music"));
        Music->resize(519, 388);
        action_Open = new QAction(Music);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/Actions-document-open-folder-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon);
        action_Save = new QAction(Music);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/Actions-document-save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon1);
        actionSave_as = new QAction(Music);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icons/Actions-document-save-as-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon2);
        action_Exit = new QAction(Music);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        centralWidget = new QWidget(Music);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 2);

        radioButtonFiltre = new QRadioButton(centralWidget);
        radioButtonFiltre->setObjectName(QStringLiteral("radioButtonFiltre"));

        gridLayout->addWidget(radioButtonFiltre, 1, 0, 1, 1);

        pushButtonPlay = new QPushButton(centralWidget);
        pushButtonPlay->setObjectName(QStringLiteral("pushButtonPlay"));

        gridLayout->addWidget(pushButtonPlay, 2, 0, 1, 1);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));

        gridLayout->addWidget(pushButtonStop, 2, 1, 1, 1);

        Music->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Music);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 519, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menuOpen_Recent_Files = new QMenu(menu_File);
        menuOpen_Recent_Files->setObjectName(QStringLiteral("menuOpen_Recent_Files"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        Music->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Music);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Music->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Music);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Music->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(menuOpen_Recent_Files->menuAction());
        menu_File->addAction(action_Save);
        menu_File->addAction(actionSave_as);
        menu_File->addSeparator();
        menu_File->addAction(action_Exit);
        mainToolBar->addAction(action_Open);
        mainToolBar->addAction(action_Save);
        mainToolBar->addAction(actionSave_as);
        mainToolBar->addSeparator();

        retranslateUi(Music);
        QObject::connect(action_Exit, SIGNAL(triggered()), Music, SLOT(close()));
        QObject::connect(plainTextEdit, SIGNAL(modificationChanged(bool)), Music, SLOT(setWindowModified(bool)));

        QMetaObject::connectSlotsByName(Music);
    } // setupUi

    void retranslateUi(QMainWindow *Music)
    {
        Music->setWindowTitle(QApplication::translate("Music", "Music [*]", Q_NULLPTR));
        action_Open->setText(QApplication::translate("Music", "&Ouvrir", Q_NULLPTR));
        action_Save->setText(QApplication::translate("Music", "&Enregistrer", Q_NULLPTR));
        action_Save->setIconText(QApplication::translate("Music", "Enregistrer", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("Music", "Enregistrer &sur", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSave_as->setToolTip(QApplication::translate("Music", "Enregistrer sur", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        action_Exit->setText(QApplication::translate("Music", "&Quitter", Q_NULLPTR));
        plainTextEdit->setDocumentTitle(QString());
        radioButtonFiltre->setText(QApplication::translate("Music", "Filtre passe-bas", Q_NULLPTR));
        pushButtonPlay->setText(QApplication::translate("Music", "Play", Q_NULLPTR));
        pushButtonStop->setText(QApplication::translate("Music", "Stop", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("Music", "&Fichier", Q_NULLPTR));
        menuOpen_Recent_Files->setTitle(QApplication::translate("Music", "Liste des fichiers r\303\251cents", Q_NULLPTR));
        menu_Edit->setTitle(QApplication::translate("Music", "&Modifier", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Music: public Ui_Music {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSIC_H
