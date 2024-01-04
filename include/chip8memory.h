#ifndef CHIP8MEMORY_H
#define CHIP8MEMORY_H

#include "config.h"
struct chip8_memory
{
    unsigned char memory[CHIP8_MEMORY_SIZE];
};

void chip8_memory_set(struct chip8_memory* memory, int index, unsigned char val); // set some memory (4096 bytes are required for the chip8)
unsigned char chip8_memory_get(struct chip8_memory* memory, int index); // get some memory

#endif
