/*
5. ���̸� ��ġ(inch)�� �Է¹޾� ��Ƽ����(cm)�� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
1 inch�� 2.54cm�� �ش��Ѵ�.

������
����(inch)? [10]
10.000000 inch = 25.400000 cm

*/

#define _CRT_SECURE_NO_WARNINGS
#define InchtoCM 2.54
#include <stdio.h>

int pa03_05(void)
{
	float inch = 0;
	printf("����(inch)? ");
	scanf("%f", &inch);
	
	printf("%f inch = %f cm", inch, inch * InchtoCM);
}