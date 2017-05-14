# Install script for directory: /home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/asifadam93/Desktop/aquilaTest/aquila-libs")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/asifadam93/Desktop/aquilaTest/aquila-build/lib/unittestpp/libUnitTest++.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/UnitTest++" TYPE FILE FILES
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/TestResults.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/ExceptionMacros.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/Config.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/CurrentTest.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/DeferredTestReporter.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/HelperMacros.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/TimeConstraint.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/AssertException.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/DeferredTestResult.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/ReportAssert.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/CheckMacros.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/ExecuteTest.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/TestReporter.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/TestReporterStdout.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/TestMacros.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/TestList.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/CompositeTestReporter.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/UnitTest++.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/TestSuite.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/ReportAssertImpl.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/TestRunner.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/Checks.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/TimeHelpers.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/MemoryOutStream.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/UnitTestPP.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/XmlTestReporter.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/TestDetails.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/Test.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/UnitTest++/Posix" TYPE FILE FILES
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/Posix/SignalTranslator.h"
    "/home/asifadam93/Desktop/aquilaTest/aquila-src/lib/unittestpp/UnitTest++/Posix/TimeHelpers.h"
    )
endif()

