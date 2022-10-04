#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char C);
char *ctreate_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_contact(char *s1, char *s2);
int **alloc_grid(int **grid, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
#endif
