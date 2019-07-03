/*===========================================================================
     _____        _____        _____        _____
 ___|    _|__  __|_    |__  __|__   |__  __| __  |__  ______
|    \  /  | ||    \      ||     |     ||  |/ /     ||___   |
|     \/   | ||     \     ||     \     ||     \     ||___   |
|__/\__/|__|_||__|\__\  __||__|\__\  __||__|\__\  __||______|
    |_____|      |_____|      |_____|      |_____|

--[Mark3 Realtime Platform]--------------------------------------------------

Copyright (c) 2019 m0slevin, all rights reserved.
See license.txt for more information
===========================================================================*/

#ifndef __M3_IO_H__
#define __M3_IO_H__

#include <stddef.h>

#if defined(__cplusplus)
extern "C" {
#endif

// Mark3 opaque file type
typedef struct {
    void *io;
} m3_file;

// stdin/stdout/stderr storage
extern m3_file __stdio_FILEs[];
typedef m3_file FILE;

#define stdin  (&__stdio_FILEs[0])
#define stdout (&__stdio_FILEs[1])
#define stderr (&__stdio_FILEs[2])

// C-wrapper for reading from a file io object
size_t m3_io_read(void* io, void* ptr, size_t count);

// C-wrapper for writing to a file io object
size_t m3_io_write(void* io, const void* ptr, size_t count);

// Assign an io node referenced by void pointer to a given
// fd.  Used for initializing stdin/stdout/stderr at the app
// layer.
void m3_io_set(void* io, int fd);

#if defined(__cplusplus)
}
#endif

#endif // __M3_IO_H__
