// ���� ���� �Ű������� ���� �Լ��� ��� ��

#include <stdio.h>

void hi(void)
{
	printf("Hi! Let's enjoy C programming.\n");
}

void bye() { printf("Bye!\n"); }


int ex06_01(void)
{
	hi();
	bye();

	hi();
	bye();

	return 0;
}