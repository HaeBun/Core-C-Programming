/*
2. �л��� ������ �̸��� �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �л��� �̸��� ���ڿ���, ������ �Ǽ��� �Է¹޴´�.

������
�̸�? [������]
����? [4.3]
�������� ������ 4.300000�Դϴ�.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_02(void)
{
	char name[20];
	float score = 0.0;

	printf("�̸�? ");
	scanf("%s", name);
	printf("����? ");
	scanf("%f", &score);
	printf("%s�� ������ %f�Դϴ�.", name, score);

}