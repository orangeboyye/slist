#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "slist.h"

#define COUNT 10

int main(int argc, char const *argv[])
{
	printf("\n");
	printf("----------------------------------\n");
	printf("\n");

	int count = COUNT;
	if (argc > 1)
		count = atoi(argv[1]);
	if (count < 1)
		count = 1;

	int tmp[count];
	srand(time(NULL));
	printf("new an array randomly\n");
	for (int i = 0; i < count; ++i)
		// tmp[i] = rand()%count + 1;
		tmp[i] = i;
	for (int i = 0; i < count; ++i)
		printf("%d ", tmp[i]);
	printf("\n");
	printf("\n");

	struct snode *head = NULL;
	for(int i = 0; i < count; i++)
		insert_snode(&head, tmp[i]);

	print_slist(head);
	printf("\nreverse the list\n");
	reverse_slist(&head);
	print_slist(head);

	printf("\nreverse the list\n");
	reverse_slist2(&head);
	print_slist(head);

	printf("\n");
	printf("\n");

	return 0;
}




