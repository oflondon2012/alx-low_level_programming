#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>
#include <stdbool.h>


extern char **environ;

int ge_myputchar(char strg);
void ge_puts(char *strg);

char ge_strdup(char *strg);
char *ge_concat_str(const char *name, const char *sepa, const char *value);
size_t ge_strlen(const char *strg);

void(*ge_buildin_check(char **strg))(char **strg);
/**
 * struct GeBuildin - structure to represent a build-in command
 * @name: the command to execute
 * @func: to execut the command
 */
typedef struct GeBuildin
{
	const char *name;
	void (*func)(char **);
} GeBuildin;

char *ge_getenviron(const char *name);
void ge_handleEOF(int lenn, char *buf);
void ge_signal_c(int sig_num);

char **ge_splitString(char *strg, const char *delim);
void ge_execute(char **strg);
void *ge_realloc(void *strgptr, unsigned int oldsize, unsigned int newsize);
void ge_freestrg(char **strg);

/**
 * struct list_path - path directories
 * @dir: directory
 * @po: pointer
 */
typedef struct list_path{
	char *dir;
	struct list_path *po;
} list_path;

list_path *ge_lnpath(char *spath);
list_path *ge_add_node(list_path **head, char *dir);
void ge_freelist(list_path *ptolink);
char *ge_pathname(char *filename, list_path *head);


void ge_environ(char **argv __attribute__ ((unused)));
void ge_exit(char **ards);
int ge_atoi(char *strg);
void ge_setenviron(char **strg);

void ge_term(void);




#endif
