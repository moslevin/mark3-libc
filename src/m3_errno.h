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

#ifndef __M3_ERRNO_H__
#define __M3_ERRNO_H__

#if defined(__cplusplus)
extern "C" {
#endif

// Return a pointer to storage used to implement a thread-safe errno
int* m3_errno_storage();

#if defined(__cplusplus)
}
#endif

#endif // __M3_ERRNO_H__

