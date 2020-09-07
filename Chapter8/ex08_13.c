// 포인터에 의한 전달 방법으로 구현한 swap 함수
#include <stdio.h>
void swap(int *x, int *y);

int ex08_13(void)
{
	int a = 3, b = 7;

	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}

void swap(int *x, int *y) 
{
	int temp = *x;
	*x = *y;
	*y = temp;
};