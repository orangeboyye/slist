#include <stdio.h>
#include <stdlib.h>
#include "slist.h"

int insert_snode(struct snode **head, int value)
{
	struct snode *node = malloc(sizeof(struct snode));
	if(!node)
		return -1;
	node->value = value;
	node->next = NULL;
	if(*head == NULL){
		*head = node;
		return 0;
	}
	struct snode *p = *head;
	while(p->next){
		p = p->next;
	}
	p->next = node;
	return 0;
}

int remove_snode(struct snode **head, int value)
{

	return 0;
}

void print_slist(struct snode *head)
{
	if(!head){
		printf("%s\n[empty]\n", "The slist is empty!");
		return;
	}

	printf("%s\n", "The slist is :");
	while(head){
		printf("%d ", head->value);
		head = head->next;
	}
	printf("\n");

}

void reverse_slist(struct snode **head)
{
	if(!*head || !(*head)->next)
		return;

	struct snode *p = *head, *q = (*head)->next, *t;
	while(q){
		t = q->next;
		q->next = p;
		p = q;
		q = t;
	}
	(*head)->next = NULL;
	*head = p;
}

void reverse_slist2(struct snode **head)
{
	if(!*head)
		return;

	struct snode *c = *head, *prev = NULL, *next;
	while(c){
		next = c->next;
		c->next = prev;
		prev = c;
		c = next;
	}
	(*head) = prev;
}