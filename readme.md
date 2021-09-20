# Setting up Embedded Environment

Two systems are required for the development of embedded programming:

* A build system
* A target system

### Build System

A build system is where the code will be developed and compiled.

### Target System

A target system is where the compiled code will be run.

### Launch qemu (Target System)

```bash
qemu-system-arm -M versatilepb -dtb versatile-pb.dtb -cpu arm1176 -kernel kernel-qemu-stretch -m 256 -drive file=2021-05-07-raspios-buster-armhf-lite.img,format=raw -append "rw console=ttyAMA0 rootfstype=ext4 root=/dev/sda2 loglevel=8" -net user,hostfwd=tcp::22023-:22,hostfwd=tcp::9090-:9090 -net nic -serial stdio

```
<!-- -nographic  -->


