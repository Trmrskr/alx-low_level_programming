#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int, char);

char *_strdup(char *str);

char *str_concat(char *, char *);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

#endif
