#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list has a cycle.
 * @list: A pointer to the head of the linked list.
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list, *fast = list;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;        /* Move one step at a time */
		fast = fast->next->next;  /* Move two steps at a time */

		if (slow == fast)
		{
			/* The pointers met, indicating a cycle */
			return (1);
		}
	}

	return (0);
}

