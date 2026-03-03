#include "memory_manager.h"

#define POOL_SIZE 8192

static uint8_t memory_pool[POOL_SIZE];
static uint32_t pool_index;

void mm_init(void)
{
    pool_index = 0;
}

void* mm_alloc(uint32_t size)
{
    if (pool_index + size >= POOL_SIZE)
        return 0;

    void* ptr = &memory_pool[pool_index];
    pool_index += size;
    return ptr;
}

void mm_reset(void)
{
    pool_index = 0;
}
