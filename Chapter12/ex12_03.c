// ���� 12-3 : ���� ����� �ݱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex12_03(void)
{
	FILE *fout = NULL;				// ��¿� ����
	FILE *fin = NULL;				// �Է¿� ����

	fout = fopen("a.txt", "w");		// ��¿� ������ ����
	if (fout = NULL)
	{
		printf("���� ���� ����\n");
		return 1;					// ���α׷��� �����Ѵ�.
	}
	fclose(fout);					// ��¿� ������ �ݴ´�.

	fin = fopen("a.txt", "r");		// �Է¿� ������ ����.
	if (fin = NULL)
	{
		printf("���� ���� ����\n");
	}
	printf("���� ���� ����\n");
	fclose(fin);

	return 0;
}