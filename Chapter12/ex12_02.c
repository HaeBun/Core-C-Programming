// ���� 12-2 : ���� ����� �ݱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex12_02(void)
{
	FILE *fp = NULL;

	fp = fopen("a.txt", "r");	// "a.txt"�� �����Ƿ� ���� ���� ����
	if (fp = NULL)
	{
		printf("���� ���� ����\n");
		return 1;	// ���α׷��� �����Ѵ�.
	}
	printf("���� ���� ����\n");
	fclose(fp);

	return 0;
}