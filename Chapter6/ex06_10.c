// 지역 변수로서의 매개변수
#include <stdio.h>

void double_it(int num)
{
	num *= 2;				// 매개변수 num은 함수가 리턴할 때 소멸된다.
}

int double_this(int num)
{
	return num * 2;			// 2배로 만든 값을 리턴한다.
}

int ex06_10(void)
{
	int x = 5;

	double_it(x);			// x는 변경되지 않는다.
	printf("double_it 호출 후 : x = %d\n", x);

	x = double_this(x);		// 함수의 리턴 값을 받아와서 x에 저장한다.
	printf("double_this 호출 후 : x = %d\n", x);
}