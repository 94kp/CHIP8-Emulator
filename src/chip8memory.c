#include "chip8memory.h"
#include <assert.h>

static void chip8_is_memory_in_bounds(int index)
{
    assert(index >= 0 && index < CHIP8_MEMORY_SIZE); // good place to put a braekpoint while debugging
}

void chip8_memory_set(struct chip8_memory* memory, int index, unsigned char val) // set some memory (4096 bytes are required for the chip8)
{
    chip8_is_memory_in_bounds(index);
    memory->memory[index] = val;
}

unsigned char chip8_memory_get(struct chip8_memory* memory, int index) // get some memory
{
    chip8_is_memory_in_bounds(index);
    return memory->memory[index];
}
