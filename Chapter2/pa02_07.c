/*
7. Ŀ�� ������(S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
Ŀ�� ������� S, T, G �� ���� ���� �� �ϳ��� �Է¹޴´�.

������
Ŀ�� ������(S,T,G)�� �ֹ� ����? [T 2]
T ������ 2���� �ֹ��մϴ�.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa02_07(void)
{
	char size;
	int quantity;

	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����? ");
	scanf("%c %d", &size, &quantity);

	printf("%c ������ %d���� �ֹ��մϴ�.", size, quantity);
}