<div>
<p align=center> 
  <img src="https://imgur.com/P6kJoAm.png"/>
</p> 
</div>

![panflute tests](https://github.com/COVID-19-electronic-health-system/PanFLUte/workflows/panflute%20tests/badge.svg)

PanFLUte (Pneumonia analyzing node for FLU to everyone) is an open source spirometer.
It is used to measures the amount of air you're able to breathe in and out.

## Software block diagram
The block diagram representing the general scheme of the software.
<p align=center> 
  <img src="https://imgur.com/klRlwUa.png"/>
</p> 

# Installation 
### Compiling firmware in Docker
1. ```git clone https://github.com/COVID-19-electronic-health-system/PanFLUte.git```
2. ```docker build -t panflute:1.0 .```
3. ```docker run --rm -it --privileged -v /dev/bus/usb:/dev/bus/usb panflute:1.0```
4. You should now be greeted with a terminal environment, which has all the necessary libraries needed to compile and flash the firmware.
