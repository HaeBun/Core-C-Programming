// draw_line, get_area 함수의 선언
#include <stdio.h>

void draw_line_(char ch, int len);
double get_area_(double radius);

int ex06_08(void)
{
	int i;
	
	draw_line_('-', 40);
	for (i = 5; i <= 20; i += 5)
	{
		printf("반지름이 %d일 때 원의 면적: %.2f\n", i, get_area(i));
	}
	draw_line_('-', 40);
	return 0;
}

double get_area_(double radius)
{
	const double PI = 3.14159265359;
	return PI * radius * radius;
}

void draw_line_(char ch, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%c", ch);
	printf("\n");
}