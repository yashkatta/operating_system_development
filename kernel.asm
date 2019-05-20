bits	 32
section .text
	align 4
	dd 0x1BADB002			;magic bit for starting point of kernel to be loaded in multiboot OS
	dd 0x00
	dd - (0x1BADB002+0x00)
	
global start			;function that start executing
extern kmain			;this function is located in the kernel.c 
start:				;main code starts from this line
	cli				;clear interrupt
	call kmain		;send processor the continue the exec from kmain funcion.
	hlt				;halt the cpu(at this position.) 
