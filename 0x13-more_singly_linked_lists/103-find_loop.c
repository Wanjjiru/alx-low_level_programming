#include "lists.h"
/**
 * find_listint_loop - gets loop
 * @head: list to find
 *
 * Return: nodes address, NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dec = head;
	listint_t *jan = head;

	if (!head)
		return (NULL);
	while (dec && jan && jan->next)
	{
		jan = jan->next->next;
		dec = dec->next;
		if (jan == dec)
		{
			dec = head;
			while (dec != jan)
			{
				dec = dec->next;
				jan = jan->next;
			}
			return (jan);
		}
	}
	return (NULL);
}
