#include "lists.h"

int check_cycle(listint_t *list)
{
	listint_t *fast, *slow = list;

	while (fast && slow && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			printf("cycle detected");
			return(1);
		}
	}
	return(1);
}
