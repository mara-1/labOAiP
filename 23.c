#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define MAX_LEN 80 //длина строки
char s[MAX_LEN];



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Аринина Марина\n");
	printf("ЛР23 Задача 1\n");

	// Входной файл
	FILE* fin = fopen("d:\\OAIPproject\\Lab№23\\text1.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден");
		return;
	}

	// Выходной файл
	FILE* fout;
	fout = fopen("d:\\OAIPproject\\Lab№23\\out1.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	// в цикле для всех строк
	while (!feof(fin)) { //пока не конец файла
		// загрузить строку
		if (fgets(s, MAX_LEN - 1, fin) != NULL) { // читаем строчку, NULL- если не смогли ее прочитать
			// обработать загруженную строку
			for (int i = 0; s[i] != '\0'; i++) { // пробегаем по всем символам до i-го не завершающего "\0"

				if (s[i] == '\t') { //(isspace(s[i]))  // Если прочитан пробел
					s[i] = '%'; // Заменяем его на '%’
				}
			}
			// сохранить строку в выходной файл
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}

	// закрыли файлы
	fclose(fin);
	fclose(fout);

	printf("ЛР23 Задача 1 FINISH\n");
}
