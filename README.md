<div>
<p align=center> 
  <img src="https://imgur.com/P6kJoAm.png"/>
</p> 
</div>

![panflute tests](https://github.com/COVID-19-electronic-health-system/PanFLUte/workflows/panflute%20tests/badge.svg)
[![Netlify Status](https://api.netlify.com/api/v1/badges/1d36eea6-7947-41e3-bcce-38e6f9446aee/deploy-status)](https://app.netlify.com/sites/panflute-docs/deploys)

PanFLUte (Pneumonia analyzing node for FLU to everyone) is an open source spirometer.
It is used to measures the amount of air you're able to breathe in and out.

# Installation 
### Compiling firmware in Docker
1. ```git clone https://github.com/COVID-19-electronic-health-system/PanFLUte.git```
2. ```docker build -t panflute:1.0 .```
3. ```docker run --rm -it --privileged -v /dev/bus/usb:/dev/bus/usb panflute:1.0```
4. You should now be greeted with a terminal environment, which has all the necessary libraries needed to compile and flash the firmware.

Directory Structure
------
    .
    ├── bootloader          # Firmware that runs on the NRF52
    ├── board               # Code that runs on the ATtiny841
    └── doc                 # Doxygen documentation folder

## Licensing

This repository and all contributions herein are [licensed under the MIT license](./LICENSE). Please note that, by contributing to this repository, whether via commit, pull request, issue, comment, or in any other fashion, you are explicitly agreeing that all of your contributions will fall under the same permissive license.
