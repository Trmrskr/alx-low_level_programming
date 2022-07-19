#ifndef MAIN_H
#define MAIN_H

void _putchar(char c);

char *_memset(char *, char, unsigned int);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *, char *);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *, char *);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

#endif
