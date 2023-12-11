#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define MAX_LEN 80
char s[MAX_LEN];



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������� ������\n");
	printf("��23 ������ 3\n");

	// ������� ����
	FILE* fin = fopen("d:\\OAIPproject\\Lab�23\\text3.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}

	// �������� ����
	FILE* fout;
	fout = fopen("d:\\OAIPproject\\Lab�23\\out3.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	int letters = 0;
	// � ����� ��� ���� �����
	while (!feof(fin)) {
		
		// ��������� ������
		if (fgets(s, MAX_LEN - 1, fin) != NULL) {
			// ���������� ����������� ������
			letters = 0;
			for (int i = 0; s[i] != '\0'; i++) {
				
				if (s[i] == '\n') {
					s[i] = '\t';
				}

				if (isalpha(s[i])) // ���� ���� ���� �� ���� �����, ������� # � �����
					letters = 1;
			}
			if (letters == 1)
				strcat(s, "#\n");
			// ��������� ������ � �������� ����
			fprintf(fout, "%s", s);
			printf(">>%s<<\n", s);
		}
	}

	// ������� �����
	fclose(fin);
	fclose(fout);

	printf("��23 ������ 3 FINISH\n");
}
