/*
9. ���Ը� �Ŀ��(lb)�� �Է¹޾� ų�α׷�(kg)���� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
1 lb�� 0.45359237kg�� �ش��Ѵ�.

������
����(lb)? [5]
5 lb = 2.267962 kg

*/


#define _CRT_SECURE_NO_WARNINGS
#define lbTokg 0.45359237
#include <stdio.h>

int pa03_09(void)
{
	int lb;
	double kg;

	printf("����(lb)? ");
	scanf("%d", &lb);
	kg = lb * lbTokg;
	printf("%d lb = %f kg", lb, kg);
}