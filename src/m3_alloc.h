#ifndef __M3_ALLOC_H__
#define __M3_ALLOC_H__

#include <stddef.h>

#if defined(__cplusplus)
extern "C" {
#endif

void* m3_realloc(void* ptr, size_t size);

void* m3_malloc(size_t size);

void m3_free(const void* alloc);

#if defined(__cplusplus)
} // extern "C"
#endif

#endif
