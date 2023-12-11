#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define MAX_LEN 80
char s[MAX_LEN];



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Аринина Марина\n");
	printf("ЛР23 Задача 6\n");

	// Входной файл
	FILE* fin = fopen("d:\\OAIPproject\\Lab№23\\text6.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Выходной файл
	FILE* fout;
	fout = fopen("d:\\OAIPproject\\Lab№23\\out6.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	int k = 0;
	// в цикле для всех строк
	while (!feof(fin)) {

		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			k = 0;
			// обработать загруженную строку
			for (int i = 0; s[i] != '\0'; i++) {
				
				if (s[i] == '\n') {
					s[i] = '\t';
				}

				if (s[i] == ';') {
					k++;
				}
			}
			// сохранить строку в выходной файл
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
			fprintf(fout, "Знаков найденно: %d\n", k);
		}
	}

	// закрыли файлы
	fclose(fin);
	fclose(fout);

	printf("ЛР23 Задача 6 FINISH\n");
}
