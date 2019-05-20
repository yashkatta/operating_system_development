#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/idt.h"
#include "include/isr.h"
kmain()
{
       clearScreen();
       isr_install();
       int a = 1/0;
       print("Welcome to YASH operating system\nPlease enter a command\n");
       while (1)
       {
                print("\nYASH> ");
                
                string ch = readStr();
                if(strEql(ch,"cmd"))
                {
                        print("\nYou are allready in cmd\n");
                }
                else if(strEql(ch,"clear"))
                {
                        clearScreen();
                }
                else if(strEql(ch,"yash"))
                {
                        print("\nyash\n");
                }
                else
                {
                        print("\nBad command!\n");
                }
                
                print("\n");        
       }
}