#include <stddef.h>
#include <stdio.h>

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[");
		if (h->str == NULL)
			printf("0 (nil)");
		else
			printf("%u %s", h->len, h->str);

		 printf("]\n");
		 count++;

		h = h->next;
	}

	return (count);
}
