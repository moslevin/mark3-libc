#include "m3_alloc.h"

#include "mark3.h"
#include "string.h"

using namespace Mark3;
extern "C" {
void* m3_realloc(void* ptr, size_t size)
{
    auto* newPointer = AutoAlloc::NewRawData(size);
    if (newPointer) {
        memcpy(newPointer, ptr, size); //!!TODO: Implement API to get size of an allocation...
        AutoAlloc::Free(AutoAllocType::Raw, ptr);
    }
    return newPointer;
}

void* m3_malloc(size_t size)
{
    return AutoAlloc::NewRawData(size);
}

void m3_free(const void* alloc)
{
    AutoAlloc::DestroyRawData(alloc);
}

} // extern "C"
