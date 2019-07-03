# Mark3 libc implementation

## Overview

This repo provides a minimal embedded libc implementation, customized for the Mark3 RTOS.

This source is based off of LK's libc codebase, which is permissively licensed under the terms
of the MIT license.

This port contains a few customizations present to make it more suitable for Mark3's runtime environment:
- Memory allocation functions (new/free) are redirected to the Mark3 Kernel's AutoAlloc interface
- Errno is implemented using dedicated per-Thread storage
- Functions to map Mark3 drivers to stdin/stdout/stderr
- Disable printf() floating-point prints
- Remove reliance on LK's specific config/macros
- Generic, size-optimized memory operations, suitable for all platforms

While small, the port maintains a large number of standard library features, including:
- printf()
- thread-local errno
- memcpy/memmove/memset, and its more exotic variants
- strcmp/strcpy/strcpy, and its more exotic variants
- search/sort functions
- threadsafe malloc/free based on Mark3 kernel
- subset of stdlib/stdio features using Mark3 drivers

## References

[LK Repo](https://github.com/littlekernel/lk)
