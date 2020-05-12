// return의 사용 예
#include <stdio.h>

int ex05_24(void)
{
	int i;

	for (i = 10; i > 0; i--)
	{
		if (i % 3 == 0)
			return 1;
		printf("%d", i);
	}
	printf("\n");

	return 0;
}