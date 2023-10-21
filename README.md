# BtD development prototype board

This prject is a project of a prtotype board fro external sensord - IMU, GPS, PHT, CAN, LoRa, as well as proof of concept prototyping.


## Notes for building: 

### How to build and flash a project
(For more info - https://docs.espressif.com/projects/esp-idf/en/release-v3.3/get-started-cmake/index.html#get-started-setup-path-cmake)
1. Find the port that the esp is connected to: use 'ls /dev/tty*' for linux to see all sonnected ports. Through UART, the port is ususally /dev/ttyUSB0. 
2. Make sure to set up the environment (https://docs.espressif.com/projects/esp-idf/en/release-v3.3/get-started-cmake/add-idf_path-to-profile.html#linux-and-macos): enter following lines to set up the terminal: get_idf
3. Configure project: 'idf.py set-target esp32  idf.py menuconfig'
4. Build and flash: idf.py build + idf.py -p PORT flash
