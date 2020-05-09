// 입력된 정수들의 합계 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;
	int sum = 0;
	int i = 0;

	printf("정수 5개를 입력하세요: ");
	while (i < 5)
	{
		// 반복할 문장
		scanf("%d", &num);
		sum += num;
		i++;
	}
	printf("합계: %d\n", sum);

	return 0;
}