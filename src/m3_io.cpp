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

#include "m3_io.h"

#include "driver.h"

using namespace Mark3;

extern "C" {

m3_file __stdio_FILEs[3] = {};

size_t m3_io_read(void* io, void* ptr, size_t count)
{
    auto* driver = static_cast<Driver*>(io);
    return driver->Read(ptr, count);
}

size_t m3_io_write(void* io, const void* ptr, size_t count)
{
    auto* driver = static_cast<Driver*>(io);
    return driver->Write(ptr, count);
}

void m3_io_set(void* io, int fd)
{
    __stdio_FILEs[fd].io = io;
}

} // extern "C"
