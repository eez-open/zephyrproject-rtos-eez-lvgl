# EEZ studio GUI builder Zephyrproject sample

git clone --recursive https://github.com/goran-mahovlic/zephyrproject-rtos-eez-lvgl.git

go to your zephyre folder and run

west build -b stm32f746g_disco "PATH/to/this/repo" --build-dir "PATH/to/this/repo/build"

To work on GUI download/open eez studio, open src/hello_eez.eez-project

do some change in studio, rebuild GUI, rebuild zephyre and flash to device

![GUI](/pic/eez-lvgl_1.png)

https://www.envox.eu/studio/studio-introduction/

https://github.com/eez-open/studio

