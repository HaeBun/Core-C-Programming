/*
8. �Ǽ� 2���� �Է¹޾Ƽ� �հ� ���� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
�Ǽ� 2��? [12.34 0.5]
12.340000 + 0.500000 = 12.840000
12.340000 - 0.500000 = 11.840000

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_08(void)
{
	float f1 = 0.0, f2 = 0.0;

	printf("�Ǽ� 2��? ");
	scanf("%f %f", &f1, &f2);

	printf("%f + %f = %f\n", f1, f2, f1 + f2);
	printf("%f - %f = %f", f1, f2, f1 - f2);
}