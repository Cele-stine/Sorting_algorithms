#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a doubly linked list of integers
 * using insertion sort algorithm.
 * @**list: The doubly liked list to sort.
 * Return: Nothing.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head = NULL;
	listint_t *current;
	listint_t *p;
	listint_t *next_node;

	if (*list == NULL || (*list) -> next == NULL)
		return;

	current = *list;
	while (current != NULL)
	{
		next_node = current -> next;
		if (head == NULL || current -> n < head -> n)
		{
			current -> next = head;
			current -> prev = NULL;
			if (head != NULL)
				head -> prev = NULL;
			head = current;
		}
		else
		{
			p = head;
			while(p != NULL)
			{
				if (p -> next == NULL || current -> n < p -> next -> n)
				{
					current -> next = p -> next;
					if (p -> next != NULL)
						p -> next -> prev = current;
					p -> next = current;
					current -> prev = p;
					break;
				}
				p = p -> next;
			}
		}
		/*print_list((const listint_t *)*list);*/
		print_list(*list);
		current = next_node;
	}
	*list = head;
	/*print_list((const listint_t *)*list);*/
	return;
}
