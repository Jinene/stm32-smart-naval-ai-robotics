#ifndef MEMORY_MANAGER_H
#define MEMORY_MANAGER_H

#include <stdint.h>

void mm_init(void);
void* mm_alloc(uint32_t size);
void mm_reset(void);

#endif
