#include "lists.h"

/**
 * list_len - find the umber of elements in a linked list_t list
 * @h: pointer to a list_t
 *
 * Return: number o f elemnts in a list_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
