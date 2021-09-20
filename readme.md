# Embedded System

This repo is a learning process for embedded system. 
_Happy journey :)_

# Setting up Embedded Environment
Two systems are required for the development of embedded programming:

* A build system
* A target system


## Build System

A build system is where the code will be developed and compiled.

## Target System

A target system is where the compiled code will be run.

### Run dockerised build system

After docker build: `docker-compose up` 

Or to run code compilation in docker container: 
1. `docker-compose run cpp-build-env bash`
1. In the docker container: `arm-linux-gnueabi-g++ target-code-file.cpp -o target-exe-filename`

### Launch qemu (Target System)

Launch the qemu emulator:

```bash
qemu-system-arm -M versatilepb -dtb versatile-pb.dtb -cpu arm1176 -kernel kernel-qemu-stretch -m 256 -drive file=2021-05-07-raspios-buster-armhf-lite.img,format=raw -append "rw console=ttyAMA0 rootfstype=ext4 root=/dev/sda2 loglevel=8" -net user,hostfwd=tcp::22023-:22,hostfwd=tcp::9090-:9090 -net nic -serial stdio

```
<!-- -nographic  -->



