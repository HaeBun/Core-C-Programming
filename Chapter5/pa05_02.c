/*
2. ������ ��鿡 �ִ� ���� ��ǥ (x, y)�� �Է¹޾� ��� ��и��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
���� ��ǥ (x, y)? [10 -10]
4��и鿡 �ֽ��ϴ�.

��
��ø�� if�� ����ؼ� �����ϴ� ���� else if�� ����ؼ� �����ϴ� ��츦 ���غ���.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa05_02(void)
{
	int x, y;

	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0)
		if (y > 0)
			printf("1��и鿡 �ֽ��ϴ�.");
		else
			printf("4��и鿡 �ֽ��ϴ�.");
	else
		if (y > 0)
			printf("2��и鿡 �ֽ��ϴ�.");
		else
			printf("3��и鿡 �ֽ��ϴ�.");

	return 0;

/* else if�� ����ؼ� �����ϴ� ���

	if(x > 0 && y > 0)
		printf("1��и鿡 �ֽ��ϴ�.");
	else if(x > 0 && y < 0)
		printf("4��и鿡 �ֽ��ϴ�.");
	else if(x < 0 && y > 0)
		printf("2��и鿡 �ֽ��ϴ�.");
	else if(x < 0 && y < 0)
		printf("3��и鿡 �ֽ��ϴ�.");
		
*/
}