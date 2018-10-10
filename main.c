#include <stdio.h>
#include <stdlib.h>
#include "work07.h"

int main() {
	printf("Creating node named Node\n");
	struct node *Node;
	printf("\n");
	printf("Inserting 123 at start of Node\n");
	Node = insert_front(NULL, 123);
	printf("\n");
	printf("Printing Node\n");
	print_list(Node);
	printf("\n");
	printf("Inserting 456 at start of Node\n");
	Node = insert_front(Node, 456);
	printf("\n");
	printf("Printing Node\n");
	print_list(Node);
	printf("\n");
	printf("Creating node named Node1\n");
	struct node *Node1;
	printf("\n");
	printf("Making Node1 like Node with 999 at start\n");
	printf("\n");
	Node1 = insert_front(Node, 999);
	printf("Printing Node1 \n");
	print_list(Node1);
	printf("\n");
	printf("free_list(Node) should result in Node1 printing different values after initial value;\n");
	free_list(Node);
	print_list(Node1); 
	return 0;
}