#nasm -f elf32 kernel.asm -o kernel.o
gcc -m32 -c kernel.c -o kc.o -ffreestanding
gcc -m32 -c include/system.c -o obj/system.o -ffreestanding
gcc -m32 -c include/isr.c -o obj/isr.o -ffreestanding
gcc -m32 -c include/idt.c -o obj/idt.o -ffreestanding
gcc -m32 -c include/util.c -o obj/util.o -ffreestanding
gcc -m32 -c include/screen.c -o obj/screen.o -ffreestanding
gcc -m32 -c include/string.c -o obj/string.o -ffreestanding
gcc -m32 -c include/kb.c -o obj/kb.o -ffreestanding
ld -m elf_i386 -T link.ld -o Yash/boot/kernel.bin kernel.o kc.o obj/kb.o obj/screen.o obj/string.o obj/system.o obj/isr.o obj/idt.o obj/util.o 
qemu-system-x86_64 -kernel Yash/boot/kernel.bin
#grub-mkrescue -o Yash.iso Yash/

read a
