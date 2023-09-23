#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;

		free(temp->str);

		free(temp);
	}
}
