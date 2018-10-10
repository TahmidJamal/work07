#include <stdio.h>
#include <stdlib.h>
#include "work07.h"

void print_list(struct node *head) {
	while(head) {
		printf("%d\n",head->i );
		head = head->next;
	}
}

struct node * insert_front(struct node *head, int n) {
	struct node *new_guy = malloc(sizeof(struct node));
	new_guy->i = n;
	new_guy->next = head;
	return new_guy;
}

struct node * free_list(struct node *head) { 
	while(head) {
		struct node *temp = head->next;
		free(head);
		head = temp;
	}
	return head;
}
