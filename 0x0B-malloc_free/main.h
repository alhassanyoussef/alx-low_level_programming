<<<<<<< HEAD
#ifndef MAIN_H                                   
#define MAIN_H                                   
#include <stdio.h>                               
#include <stdlib.h>                              
                                                 
char *create_array(unsigned int size, char c);   
                                                 
                                                 
                                                 
                                                 
                                                 
#endif                                           
=======
#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
#endif
>>>>>>> 1ca7c38b681d42c056157658de93e9632faa2d4c
