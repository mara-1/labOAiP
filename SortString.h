#pragma once

int LoadWords(char* filename);
void fillArrayStrings();

void SelectionSortStrings(); //сортировка методом выбора(есть)
void BubbleSortStrings(); // пузырьковый метод (есть)
void InsertSortStrings(); // сортировка вставкой есть
//void MergeSortStrings(); //
void QuickSortStrings(); // быстрая сортировка (есть)
void methodOfCalculation(); // сортировка методом подсчета

//int LinearSearchStrings(char* value);
//int BinarySearchStrings(char* value);
int isSortedStrings();

extern int n;
