// get_factorial 함수의 사용 예
#include <stdio.h>

int get_factorial(int num)
{
	int i;
	int result = 1;

	for (i = 1; i <= num; i++)
		result *= i;
	return result;
}

int ex06_04(void)
{
	int i;
	int fact;

	for (i = 1; i <= 5; i++)
	{
		fact = get_factorial(i); // get_factorial(i)의 리턴 값을 저장한다.
		printf("%2d! = %3d\n", i, fact);
	}
	get_factorial(5);

	return 0;
}