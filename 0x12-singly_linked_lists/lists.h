#ifndef LINKED_H
#define LINKED_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *  * struct list_s - singly linked list
 *   * @str: string variable
 *    * @len: lenght of the given string
 *     * @next: point at the next node in the list
 *      *
 *       * Desc: this represent the singly linked list structure
 *        */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
