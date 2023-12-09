#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "Windows.h"

#define MAX_N 8
#define MAX_M 10
int a[MAX_N][MAX_M] = {
	{ 12, 2, 6, 78},
	{ 10, 67, 43, 5},
	{ 23, 31, 54, 11}
};

int n = 3;
int m = 4;
int g;

void print() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
}
void fil() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = i * 10 + j;
		}
	}
}
void zero() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = 0;
		}
	}
}
void random() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 10;
		}
	}
}
void umn10() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] % 2 != 0) {
				a[i][j] *= 10;
			}
		}
	}
}
void geb() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] % 10 == 0) {
				a[i][j] /= 10;
			}
		}
	}
}
void vvv() {
	int b;
	printf("введите кол-во строк\n");
	scanf_s("%d", &n);
	printf("введите кол-во столбцов\n");
	scanf_s("%d", &m);
	printf("введите по одному чису\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%d", &b);
			a[i][j] = b;
		}
	}
}
void load() {
	FILE* fin = fopen("C:\\лаб 20\\lb20.1.txt", "rt");
	if (fin = NULL) {
		printf("входной фаЙл не найден");
		return;
	}
	fscanf(fin, "%d", &n);
	fscanf(fin, "%d", &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fscanf(fin, "%d", &a[i][j]);
		}
	}
	fclose(fin);
}
void save() {
	FILE* fout = fopen("C:\\лаб 20\\lb20.2.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не создался");
		return;
	}

	fprintf(fout, "%d ", n);
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			fprintf(fout, "%d ", a[i][j]);
		}
		fprintf(fout, "\n");
	}
	fclose(fout);
}
void deleteRow(int delRow) {
	for (int i = delRow; i < n - 1; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = a[i + 1][j];
		}
	}
	n--;
}

void copyRow(int copyRow) {
	n++;
	for (int i = n; i > g; i--) {
		for (int j = 0; j < m; j++) {
			a[i][j] = a[i - 1][j];
		}
	}
}

void deleteRow0() {
	int o = 0;
	int c = 0;
	printf("!!!! deleteRow0() !!!!\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0) {
				o = o + 1;
			}
		}
		if (o > 2) {
			c = i;
			for (int j = 0; j < m; j = j + 1) {
				a[c][j] = 0;
			}
		}
		o = 0;
	}
}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int index;
	int num;
	do {
		printf("\n");
		printf("------------------------------\n");
		printf("Содержимое массива:\n");
		print();
		printf("1: заполнить все значения i*10+j\n");
		printf("2: заполнить нулями\n");
		printf("3: заполнить случайными значениями\n");
		printf("4: все нечетные увеличить в 10 раз\n");
		printf("5: все картные 10 уменьшить в 10 раз\n");
		printf("6: ввести массив вручную\n");
		printf("7: взять массив из файла\n");
		printf("8: сохранить массив в файл\n");
		printf("9: удалить заданную строку из массива\n");
		printf("10: продублировать заданный столбец массива\n");
		printf("11: задание по варианту\n");
		printf("0: выйти из программы\n");
		scanf_s("%d", &index);
		switch (index) {
		case 1:
			fil();
			break;
		case 2:
			zero();
			break;
		case 3:
			random();
			break;
		case 4:
			umn10();
			break;
		case 5:
			geb();
			break;
		case 6:
			vvv();
			break;
		case 7:
			load();
			break;
		case 8:
			save();
			break;
		case 9:
			printf("какую строку удалить? ");
			scanf_s("%d", &num);
			deleteRow(num-1);
			break;
		case 10:
			printf("какую строку дублировать? ");
			scanf_s("%d", &g);
			copyRow(g-1);
			break;
		case 11:
			deleteRow0();
			break;
		}

	} while (index != 0);
}










