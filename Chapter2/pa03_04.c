/*
4. 시간을 시, 분, 초로 입력받아서 출력하는 프로그램을 작성하시오. 예를 들어 1시 1분 1초는 "01:01:01"로 출력한다.

실행결과
시? [1]
분? [1]
초? [1]
입력한 시간은 01:01:01입니다.

★
시, 분, 초 값으로 정수를 입력받아야 하는데 문자나 문자열, 실수를 입력하면 어떻게 될까?
이 경우에는 scanf가 올바른 값을 입력받지 못하므로 시간으로 엉뚱한 값이 출력된다.
왜 이런 문제가 생기는지는 나중에 다시 알아볼 것이다.
우선은 올바른 값을 입력한다고 가정하다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_04(void)
{
	int hour, minute, second;

	printf("시? ");
	scanf("%d", &hour);
	printf("분? ");
	scanf("%d", &minute);
	printf("초? ");
	scanf("%d", &second);

	printf("입력한 시간은 %02d:%02d%:%02d입니다.", hour, minute, second);
}