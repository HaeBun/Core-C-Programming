// �Ű������� �ִ� draw_line �Լ��� ��� ��
#include<stdio.h>

void draw_line(char ch, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%c", ch);
	printf("\n");
}

int ex06_02(void)
{
	int amount = 10;
	int price = 1000;
	int total = amount * price;
	int width;	//��꼭 ��� ��

	draw_line('-', 30);

	printf("����    �ܰ�     �հ�\n");
	width = 3 + 8 + 8 + 2;	//��꼭 ��� ��
	draw_line('*', width);
	printf("%3d %8d %8d\n", amount, price, total);

	draw_line('-', 30);

	return 0;
}