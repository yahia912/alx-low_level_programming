#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void reset_to_98(int *n);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
