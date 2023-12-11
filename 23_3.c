#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define MAX_LEN 80
char s[MAX_LEN];



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Аринина Марина\n");
	printf("ЛР23 Задача 3\n");

	// Входной файл
	FILE* fin = fopen("d:\\OAIPproject\\Lab№23\\text3.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Выходной файл
	FILE* fout;
	fout = fopen("d:\\OAIPproject\\Lab№23\\out3.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	int letters = 0;
	// в цикле для всех строк
	while (!feof(fin)) {
		
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			letters = 0;
			for (int i = 0; s[i] != '\0'; i++) {
				
				if (s[i] == '\n') {
					s[i] = '\t';
				}

				if (isalpha(s[i])) // если есть хотя бы одна буква, вывести # в конце
					letters = 1;
			}
			if (letters == 1)
				strcat(s, "#\n");
			// сохранить строку в выходной файл
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}

	// закрыли файлы
	fclose(fin);
	fclose(fout);

	printf("ЛР23 Задача 3 FINISH\n");
}
