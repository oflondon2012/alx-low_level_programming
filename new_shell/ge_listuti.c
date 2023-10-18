#include "shell.h"

/**
 * ge_lnpath - function that create a linked list of path
 * @spath: path value
 *
 * Return: pointer to created linkedlist
 */
list_path *ge_lnpath(char *spath)
{
	list_path *head = NULL;
	char *cpath, *token;

	if (spath == NULL)
		return (NULL);
	cpath = ge_strdup(spath);
	if (cpath == NULL)
		return (NULL);
	token = strtok(cpath, ":");
	while (token != NULL)
	{
		head = ge_add_node(&head, token);
		token = strtok(NULL, ":");
	}
	free(cpath);
	return (head);
}

/**
 * ge_add_node - function that add a new node at the end
 * of list
 * @head: pointer to the linked
 * @dir: pointer to the string
 *
 * Return: address of the new node
 */
list_path *ge_add_node(list_path **head, char *dir)
{
	list_path *new_node = malloc(sizeof(list_path));
	list_path *temp;

	if (!new_node || !dir)
		return (NULL);
	new_node->dir = ge_strdup(dir);
	new_node->po = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->po)
			temp = temp->po;
		temp->po = new_node;
	}
	return (*head);
}

/**
 * ge_freelist - function that free the listpath
 * @ptolink: pointing to linked list
 *
 * Return: void
 */
void ge_freelist(list_path *ptolink)
{
	list_path *cur = ptolink;
	list_path *temp;

	while (cur)
	{
		temp = cur;
		cur = cur->po;
		free(temp->dir);
		free(ptolink);
	}
}

/**
 * ge_pathname - function that find the pathname of filename
 * @filename: name of the file to find the path
 * @head: start of linked list
 *
 * Return: the pathname of filename or NULL
 */
char *ge_pathname(char *filename, list_path *head)
{
	struct stat st;
	char *full_path;
	list_path *cur_dir = head;

	while (cur_dir)
	{
		full_path = ge_concat_str(cur_dir->dir, "/", filename);
		if (stat(full_path, &st) == 0)
			return (full_path);
		free(full_path);
		cur_dir = cur_dir->po;
	}
	return (NULL);
}

