<div>
<p align=center> 
  <img src="https://imgur.com/P6kJoAm.png"/>
</p> 
</div>

[![Build Status](http://img.shields.io/travis/COVID-19-electronic-health-system/PanFLUte/master.svg?style=for-the-badge)](https://travis-ci.org/COVID-19-electronic-health-system/PanFLUte)

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
2. ``` docker build -t panflute:1.0 .```
3. ```docker run -it panflute:1.0```
4. You should now be greeted with a terminal environment, which has all the necessary libraries needed to compile the firmware.
