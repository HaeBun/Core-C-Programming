/*
4. ����� ������ ������ ������ ������ �Է¹޾� ����� �ۼ�Ʈ �󵵸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
����� ������ ������ ������ g ������ �Է¹޴´�.

��(%) = (������ ���� / ����� ���� + ������ ����) x 100

������
���(g)? [100]
����(g)? [15]
��: 13.04 %
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_04(void)
{
	int solvent, brush;
	float result;

	printf("���(g)? ");
	scanf("%d", &solvent);

	printf("����(g)? ");
	scanf("%d", &brush);

	result = ((float)brush / (float)(solvent + brush)) * 100.0;
	printf("��: %.2f %%", result);
}