// ��ø�� if�� ��� ��
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int ex05_04(void)
{
	int age, fee;

	printf("����? ");
	scanf("%d", &age);

	if (age >= 8) {
		if (age >= 65) {
			fee = 5000;
		}
		else {
			fee = 10000;
		}
	}
	else {
		fee = 0;
	}
	printf("�����: %d��\n", fee);
	
	return 0;
}