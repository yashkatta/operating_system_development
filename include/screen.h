#ifndef SCREEN_H
#define SCREEN_H
#include "types.h"
#include "system.h"
#include "string.h"

void clearLine(uint8,uint8);

void updateCursor();

void clearScreen();

void scrollUp(uint8);

void newLineCheck();

void printch(char);

void print(string);

#endif
