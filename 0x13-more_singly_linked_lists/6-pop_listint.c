#include "lists.h"

/**
*pop_listint - deletes head node
*@head: double pointer
*Return: 0 if linked list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int data;

	if (*head == NULL)
		return (0);

	tempNode = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(tempNode);

	return (data);
}#include "lists.h"

/**
*pop_listint - deletes head node
*@head: double pointer
*Return: 0 if linked list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int data;

	if (*head == NULL)
		return (0);

	tempNode = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(tempNode);

	return (data);
}
