#!/bin/bash
#qemu-img create -f qcow2 disk.img 50G
qemu-system-x86_64 -cpu max -m 2G -machine pc-i440fx-bionic -vga cirrus \
-serial stdio -usb -device usb-kbd -device usb-tablet -show-cursor \
-bios ovmf.fd -hda disk.img #-cdrom 2021-01-11-raspios-buster-i386.iso
