// 매개변수가 있는 draw_line 함수의 사용 예
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
	int width;	//계산서 헤더 폭

	draw_line('-', 30);

	printf("수량    단가     합계\n");
	width = 3 + 8 + 8 + 2;	//계산서 헤더 폭
	draw_line('*', width);
	printf("%3d %8d %8d\n", amount, price, total);

	draw_line('-', 30);

	return 0;
}