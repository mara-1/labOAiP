#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <time.h>
#include <stdio.h>
#include "SortString.h"

char filename[] = "c:\\Temp\\Lection15_2023\\dict04b.txt"; // ��� �� ���������


void main() {
	// t0 - ������� ������ ������� �� ������ ��������� �� ������� ����� � ������� main()
	long t0 = clock();
	printf("t0 = %.100f sec \n", t0 / (float)CLOCKS_PER_SEC);

	LoadWords(filename);
	// �������� ����� ������ ��������������
	printf("Experiment with array lenth = %d, file = %s\n", n, filename);

	// t1 - ������� ������ ������� �� ������ ��������� �� ��������� �������� 	�������
	int t1 = clock();
	printf("t1 = %.100f sec \n", t1 / (float)CLOCKS_PER_SEC);


	for (int i = 0; i < 1; i++) {
		fillArrayStrings();

		//SelectionSortStrings();
		//QuickSortStrings();
		//BubbleSortStrings(); // ����������� �����
        //InsertSortStrings(); //
		methodOfCalculation();

		if (!isSortedStrings()) {
			printf("Array is not sorted!!!\n");
		}
	}

	// t2 - ������� ������ ������� �� ������ ��������� �� ��������� ����������
	long t2 = clock();
	printf("t2 = %.100f sec \n", t2 / (float)CLOCKS_PER_SEC);

	printf("t1 - t0 = %.30f sec (Run time of array loading)\n",
		(t1 - t0) / (float)CLOCKS_PER_SEC);
	printf("t2 - t1 = %.30f sec (Run time of sorting)\n",
		(t2 - t1) / (float)CLOCKS_PER_SEC);
}
