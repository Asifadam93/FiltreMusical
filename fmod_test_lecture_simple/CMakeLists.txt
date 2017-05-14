cmake_minimum_required(VERSION 3.6)
project(fmod_test_lecture_simple)


# Les librairies présentes dans ce projet de test fonctionne sur MacOS, il es possible que sur un OS différent, les librairies soient différentes
# Ces librairies peuvent être téléchargés sur le site de fmod
# A l'adresse suivante : http://www.fmod.org/download/
# Catégorie : FMOD Studio Programmer’s API and Low Level Programmer API
file(GLOB SOURCES_INC   api/lowlevel/inc/*.h
                        api/lowlevel/inc/*.hpp
                        api/studio/inc/*.h
                        api/studio/inc/*.hpp)

file(GLOB SOURCES_LIBRARIES     api/lowlevel/lib/*.dylib
                                api/studio/lib/*.dylib)

message("LIBRARIES = ${LIBRARIES}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")



set(SOURCE_FILES main.cpp )

add_executable(fmod_test_lecture_simple ${SOURCE_FILES} ${SOURCES_INC} )

target_link_libraries(fmod_test_lecture_simple ${SOURCES_LIBRARIES})