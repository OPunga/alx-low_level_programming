#include "lists.h"

/**
 * add_node_end - addss a new node at the end of a list_t list
 * @head: pointer to the address of the first node
 * @str: the value of the str new node
 *
 * Return: head of the new list. Otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str);
{
	list_t *trav, *new;

