// 배열의 복사
#include <stdio.h>

int main(void)
{
	int x[5] = { 10, 20, 30, 40, 50 };	// x와 y는 크기와 데이터형이 같은 배열이다.
	int y[5] = { 0 };
	int i;

	//y = x;		// 배열을 다른 배열에 대입하면 컴파일 에러

	for (i = 0; i < 5; i++)
		y[i] = x[i];// 배열의 원소끼리 1:1로 대입한다. (배열의 복사)

	printf("y = ");
	for (i = 0; i < 5; i++)
		printf("%d ", y[i]);
	printf("\n");

	return 0;
}