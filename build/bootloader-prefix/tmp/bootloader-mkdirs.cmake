# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/rast/esp/esp-idf/components/bootloader/subproject"
  "/Users/rast/esp/BtD/build/bootloader"
  "/Users/rast/esp/BtD/build/bootloader-prefix"
  "/Users/rast/esp/BtD/build/bootloader-prefix/tmp"
  "/Users/rast/esp/BtD/build/bootloader-prefix/src/bootloader-stamp"
  "/Users/rast/esp/BtD/build/bootloader-prefix/src"
  "/Users/rast/esp/BtD/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/rast/esp/BtD/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/rast/esp/BtD/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
