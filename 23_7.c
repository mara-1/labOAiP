#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define MAX_LEN 80
char s[MAX_LEN];

// Все латинские буквы заменить символом "&"

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Аринина Марина\n");
	printf("ЛР23 Задача 7\n");

	// Входной файл
	FILE* fin = fopen("d:\\OAIPproject\\Lab№23\\text7.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Выходной файл
	FILE* fout;
	fout = fopen("d:\\OAIPproject\\Lab№23\\out7.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}
	// в цикле для всех строк
	while (!feof(fin)) {
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// обработать загруженную строку
			for (int i = 0; s[i] != '\0'; i++) {


				if (isalpha(s[i])) 
					s[i] = '&';
			}
			// сохранить строку в выходной файл
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}

	// закрыли файлы
	fclose(fin);
	fclose(fout);

	printf("ЛР23 Задача 7 FINISH\n");
}
