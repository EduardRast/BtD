# Notes for future:

## How to build and flash a project
(For more info - https://docs.espressif.com/projects/esp-idf/en/release-v3.3/get-started-cmake/index.html#get-started-setup-path-cmake)

1. Find the port that the esp is connected to: use 'ls /dev/tty*' for linux to see all sonnected ports. Through UART, the port is ususally /dev/ttyUSB0. 

2. Make sure to set up the environment (https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/linux-macos-setup.html#step-4-set-up-the-environment-variables): 
enter following lines to set up the terminal: . $HOME/esp/esp-idf/export.sh

3. Configure project: 'idf.py set-target esp32  idf.py menuconfig'

4. Build and flash: idf.py build + idf.py -p PORT flash (monitor; to monitor right after flashing) //note - do not monitor the port when flashing

5. To see the serial port output from the microcontroller: idf.py monitor PORT //note - baund if different, easier to change in confing files

/dev/tty.usbserial-1220
