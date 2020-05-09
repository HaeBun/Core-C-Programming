// 입력된 정수들의 합계 구하기
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int ex05_11(void)
{
	int num = 0;
	int sum = 0;
	int i;

	printf("정수 5개를 입력하세요: ");
	for (i = 0; i < 5; i++) 
	{
		scanf("%d", &num);
		sum += num;
	}
	printf("합계; %d\n", sum);

	return 0;
}