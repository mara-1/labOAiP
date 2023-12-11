#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define MAX_LEN 80
char s[MAX_LEN];



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������� ������\n");
	printf("��23 ������ 6\n");

	// ������� ����
	FILE* fin = fopen("d:\\OAIPproject\\Lab�23\\text6.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}

	// �������� ����
	FILE* fout;
	fout = fopen("d:\\OAIPproject\\Lab�23\\out6.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}

	int k = 0;
	// � ����� ��� ���� �����
	while (!feof(fin)) {

		// ��������� ������
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			k = 0;
			// ���������� ����������� ������
			for (int i = 0; s[i] != '\0'; i++) {
				
				if (s[i] == '\n') {
					s[i] = '\t';
				}

				if (s[i] == ';') {
					k++;
				}
			}
			// ��������� ������ � �������� ����
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
			fprintf(fout, "������ ��������: %d\n", k);
		}
	}

	// ������� �����
	fclose(fin);
	fclose(fout);

	printf("��23 ������ 6 FINISH\n");
}
