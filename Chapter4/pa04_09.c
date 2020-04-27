/*
9. 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.

실행결과
재생시간(초)? [4000]
재생시간은 1시간 6분 40초입니다.

★
조건 연산자를 이용하면 재생시간을 시, 분, 초로 변환한 값에 대하여 0인 경우 출력하지 않게 할 수 있다.
예를 들어 "재생시간은 0시간 3분 0초입니다." 대신 "재생시간은 3분입니다."라고 출력하게 만들 수 있다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_09(void)
{
	int hour, minute, second;

	printf("재생시간(초)? ");
	scanf("%d", &second);
	
	hour = second / 3600;
	second %= 3600;

	minute = second / 60;
	second %= 60;

	printf("재생시간은 %d시간 %d분 %d초입니다.", hour, minute, second);
}