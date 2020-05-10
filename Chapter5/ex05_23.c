// goto의 사용 예

#include <stdio.h>

int ex05_23(void)
{
	int i;

	for (i = 10; i > 0; i--)
	{
		if (i % 3 == 0)
			goto quit;
		printf("%d ", i);
	}
quit:
	printf("\n");

	return 0;
}