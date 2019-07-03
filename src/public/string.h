/*
 * Copyright (c) 2008 Travis Geiselbrecht
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef __LIB_STRING_H
#define __LIB_STRING_H

#include <stddef.h>

#if defined(__cplusplus)
extern "C" {
#endif

void *memchr (void const *, int, size_t);
int   memcmp (void const *, const void *, size_t);
void *memcpy (void *, void const *, size_t);
void *memmove(void *, void const *, size_t);
void *memset (void *, int, size_t);

char       *strcat(char *, char const *);
char       *strchr(char const *, int);
int         strcmp(char const *, char const *);
char       *strcpy(char *, char const *);
char const *strerror(int);
size_t      strlen(char const *);
char       *strncat(char *, char const *, size_t);
int         strncmp(char const *, char const *, size_t);
char       *strncpy(char *, char const *, size_t);
char       *strpbrk(char const *, char const *);
char       *strrchr(char const *, int);
size_t      strspn(char const *, char const *);
size_t      strcspn(const char *s, const char *);
char       *strstr(char const *, char const *);
char       *strtok(char *, char const *);
int         strcoll(const char *s1, const char *s2);
size_t      strxfrm(char *dest, const char *src, size_t n);
char       *strdup(const char *str);

/* non standard */
void   bcopy(void const *, void *, size_t);
void   bzero(void *, size_t);
size_t strlcat(char *, char const *, size_t);
size_t strlcpy(char *, char const *, size_t);
int    strncasecmp(char const *, char const *, size_t);
int    strnicmp(char const *, char const *, size_t);
size_t strnlen(char const *s, size_t count);

#if defined(__cplusplus)
} // extern "C"
#endif

#endif
