// get_factorial �Լ��� ��� ��
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
		fact = get_factorial(i); // get_factorial(i)�� ���� ���� �����Ѵ�.
		printf("%2d! = %3d\n", i, fact);
	}
	get_factorial(5);

	return 0;
}