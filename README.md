# libcurl-esp32

A library to easily import CURL into your PlatformIO projects.

## Installation

1. Open platformio.ini, a project configuration file located in the root of PlatformIO project.
2. Add the following line to the `lib_deps` option of `[env:YourESP32BuildTarget]`:
`anto/libcurl-esp32`.
3. Add `-DBUILDING_LIBCURL` and `-DHAVE_CONFIG_H` in the `build_flags` of the project.
4. Build the project, PlatformIO will automatically install dependencies. 

## Update CURL

To update CURL, raise an issue or fork the repository and change the commit hash to the one you want in the `updateProject.sh` file.

If for some reason CURL stopped compiling, raise an issue.

## Warning

This project has been made for ESP32 chips (via the custom `curl_config.h` file) and might not compile properly for other systems.
