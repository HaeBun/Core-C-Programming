// break�� ��� ��

#include <stdio.h>

int ex05_19(void)
{
	int i;

	for (i = 10; i > 0; i--)
	{
		if (i % 3 == 0)
			break;
		printf("%d ", i);
	}
	printf("\n");

	return 0;
}