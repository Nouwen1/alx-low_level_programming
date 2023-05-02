#include "lists.h"

/**
*free_listint - list
*@head: pointer
*Return: null
*/
void free_listint(listint_t *head)
{
	listint_t *tempNode;

	while (head)
	{
		tempNode = head->next;
		free(head);
		head = tempNode;
	}
}
