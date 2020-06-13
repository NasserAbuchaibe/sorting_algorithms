#include "sort.h"
/**
 * insertion_sort_list -  sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: double linked list to sorting
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *aux = NULL;

	if (list == NULL || *list == NULL)
		return;

	aux = (*list)->next;

	while (aux)
	{
		while (aux->prev != NULL && aux->n < aux->prev->n)
		{
			aux->prev->next = aux->next;
			if (aux->next != NULL)
				aux->next->prev = aux->prev;
			aux->next = aux->prev;
			aux->prev = aux->prev->prev;
			aux->next->prev = aux;

			if (!aux->prev)
				*list = aux;
			else
				aux->prev->next = aux;
			print_list(*list);
		}
		aux = aux->next;
	}
}
