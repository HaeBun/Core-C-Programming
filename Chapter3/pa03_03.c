/*
3. ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
������ kg ����, ���̴� m ������ �Է¹޴´�.

��ġ ������ = 9.8 x ���� x ����

������
����(kg)? [10]
����(m)? [5]
��ġ������: 490.000000 J

*/

#define _CRT_SECURE_NO_WARNINGS
#define Ep 9.8
#include <stdio.h>

int pa03_03(void)
{
	int kg, m;
	float energy = 0.0;

	printf("����(kg)? ");
	scanf("%d", &kg);
	printf("����(m)? ");
	scanf("%d", &m);

	energy = Ep * kg * m;

	printf("��ġ������: %fJ", energy);
}