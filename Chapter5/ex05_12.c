// �Էµ� ���ڷ� ���簢�� �׸���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ex05_12(void)
{
	int width, height;
	char ch;
	int i, j;
	printf("���簢���� ���� ����? ");
	scanf("%d %d", &width, &height);
	printf("���簢���� �׸� ����? ");
	scanf(" %c", &ch);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}