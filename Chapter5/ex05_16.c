// do while의 사용 예

#include <stdio.h>

int ex05_16(void){
	int i = 0;
	do
		printf("%d ", i++);
	while (i < 10);
	printf("\n");

	return 0;
}