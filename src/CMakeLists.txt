project(libc)

set(LIB_SOURCES
    m3_errno.cpp
    m3_io.cpp
    )

set(LIB_HEADERS
    m3_errno.h
    m3_io.h
    )

mark3_add_library(libc_m3 ${LIB_SOURCES} ${LIB_HEADERS})

target_include_directories(libc_m3
    PUBLIC
        .
    )

target_link_libraries(libc_m3
    mark3
    driver
)

set(LIB_SOURCES
    atexit.c
    atoi.c
    bcopy.c
    bsearch.c
    bzero.c
    ctype.c
    errno.c
    getopt.c
    memchr.c
    memcmp.c
    memcpy.c
    memmove.c
    memscan.c
    memset.c
    printf.c
    qsort.c
    rand.c
    stdio.c
    strcat.c
    strchr.c
    strcmp.c
    strcoll.c
    strcpy.c
    strdup.c
    strerror.c
    strlcat.c
    strlcpy.c
    strlen.c
    strncat.c
    strncmp.c
    strncpy.c
    strnicmp.c
    strnlen.c
    strpbrk.c
    strrchr.c
    strspn.c
    strstr.c
    strtok.c
    strtol.c
    strtoll.c
    strxfrm.c
)

set(LIB_HEADERS
    public/assert.h
    public/ctype.h
    public/endian.h
    public/errno.h
    public/iovec.h
    public/inttypes.h
    public/limits.h
    public/malloc.h
    public/printf.h
    public/rand.h
    public/stdlib.h
    public/stdio.h
    public/strings.h
    public/string.h
    public/sys/types.h
)

mark3_add_library_c(libc ${LIB_SOURCES} ${LIB_HEADERS})

target_include_directories(libc
    PUBLIC
        public
    )

target_link_libraries(libc
    mark3
    libc_m3
)
