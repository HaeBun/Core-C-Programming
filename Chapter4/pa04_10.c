/*
10. 항공권 에약 시 여정의 총 소요시간을 시간 단위로 입력받아서 며칠 몇 시간 몇 분인지 출력하는 프로그램을 작성하시오.
총 소요시간은 실수로 입력받는다. 예를 들어 소요시간이 10.5시간이면 10시간 30분이라는 의미이다.

★
비행 소요시간(시간)? [31.5]
비행 소요시간은 1일 7시간 30분입니다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_10(void)
{
	float time;
	int day ,hour, minute, second;
	printf("비행 소요시간(시간)? ");
	scanf("%f", &time);

	second = time * 3600;

	day = second / 86400;
	second %= 86400;

	hour = second / 3600;
	second %= 3600;

	minute = second / 60;
	second %= 60;

	printf("비행 소요시간은 %d일 %d시간 %d분", day, hour, minute);
}