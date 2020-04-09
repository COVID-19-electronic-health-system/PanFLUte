FROM ubuntu:18.04

WORKDIR panFLUte/
COPY board .

RUN apt-get update && apt-get install -y \
    make \
    gcc-avr \
    binutils-avr \
    avr-libc \
    avrdude

RUN make
