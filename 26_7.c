#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


// ÂÑÅ ÝËÅÌÅÍÒÛ ÏÐÀÂÅÅ i-ÃÎ ÓÂÅËÈ×ÈÒÜ Â 10 ÐÀÇ

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

void printList() {
	struct Node* ptr = first;
	while (ptr != NULL) {
		printf("(%d) -> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}


void elementRightIx100(int i)
{
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL) {
		if (index > i)
			ptr->data = ptr->data * 10;

		ptr = ptr->next;
		index++;

	}
	return;
}



void main() {
	first = NULL;
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	elementRightIx100(1);
	printList();

	elementRightIx100(2);
	printList();

	elementRightIx100(4);
	printList();

	{
		int x;
		scanf("%d", &x);
	}


}