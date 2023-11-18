#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

char **loadcommands(char *inputstr);
int exit_shell(char **argv);
int cd_shell(char **argv);
int _strcmp(char *s1, char *s2);
int runbuiltins(char **argv, char *str);
ssize_t _getline(char **lineptr, FILE *stream);
int _executecmd(char **argv, char *str);
char *_getpath(const char *token);
unsigned int check_delim(char c, const char *delim);
char *_strtok(char *str, const char *delim);

#endif
