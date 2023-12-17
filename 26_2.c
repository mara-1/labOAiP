#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//ясллю бяеу щкелемрнб

struct Node {
	int data;
	struct Node* next;
};


struct Node* first = NULL;

void addToHead(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->next = first;
	newNode->data = value;

	first = newNode;
}

int sum()
{
	struct Node* ptr = first;
	int s = 0;
	while (ptr != NULL) {
		s += ptr->data;
		ptr = ptr->next;
	}
	return s;
}



void printList() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		printf("(%d) -> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}

void clearList() {
	while (first != NULL)
	{
		struct Node* delNode = first;
		first = first->next;
		free(delNode);
	}
}



void main() {
	first = NULL;
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(9);
	printList();

	printf("sum = %d\n", sum());

	clearList();
	printList();

	printf("sum = %d\n", sum());


	{
		int x;
		scanf("%d", &x);
	}

	
}


