#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//йнкхвеярбн вермшу щкелемрнб


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

int evenCount()
{
	struct Node* ptr = first;
	int k = 0;
	while (ptr != NULL) {
		if (ptr->data % 2 == 0)
			k++;
		
		ptr = ptr->next;
	}
	return k;
}





void main() {
	first = NULL;
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	printf("even numbers = %d\n", evenCount());

	clearList();
	printList();

	printf("even numbers = %d\n", evenCount());


	{
		int x;
		scanf("%d", &x);
	}


}