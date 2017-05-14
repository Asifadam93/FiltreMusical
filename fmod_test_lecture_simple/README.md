#Contenu de cet exemple
Cet exemple permet de réaliser une simple lecture de fichier audio

Attention les librairies incluses dans cet exemples sont les librairies utilisées sur un ordinateur MAC.
pour utiliser cet exemple, il est nécessaire de télécharger l'API FMOD adéquate à l'adresse suivante : 
http://www.fmod.org/download/ (Catégorie : FMOD Studio Programmer’s API and Low Level Programmer API)

Pensez ensuite changer dans les librairies, et les headers utilisés dans le fichier CMakeLists.txt

    file(GLOB SOURCES_INC   api/lowlevel/inc/*.h
                            api/lowlevel/inc/*.hpp
                            api/studio/inc/*.h
                            api/studio/inc/*.hpp)
    
    file(GLOB SOURCES_LIBRARIES     api/lowlevel/lib/*.dylib
                                    api/studio/lib/*.dylib)



