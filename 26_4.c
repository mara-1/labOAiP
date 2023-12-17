#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//ÂÑÅ ÍÅ×ÅÒÍÛÅ ÓÂÅËÈ×ÈÒÜ Â 10 ÐÀÇ


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

void clearList() {
	while (first != NULL)
	{
		struct Node* delNode = first;
		first = first->next;
		free(delNode);
	}
}

void oddsX10()
{
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data % 2 != 0) 
			ptr->data = ptr->data * 10;

		ptr = ptr->next;	
	}
}



void main() {
	first = NULL;
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	oddsX10();
	printList();

	clearList();
	printList();



	{
		int x;
		scanf("%d", &x);
	}


}