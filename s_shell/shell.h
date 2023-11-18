#ifndef _SHELL_H
#define _SHELL_H

/**
 * include the c header files 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdbool.h>

/**
 * take in the prototype of the task
 */
/*printf function*/
void g_printf(const char *strg); 
void r_command(char *strg, size_t lenn);
void command_execution(const char *strg);
void get_prompt(void);

#endif /* end of header file */
