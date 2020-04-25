/*
4. 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오.
힘의 크기는 N 단위로 입력받고, 이동한 거리는 m 단위로 입력받는다.

일의 양 = 힘의 크기 x 이동한 거리

실행결과
힘(N)? [5]
이동거리(m)? [3]
일의 양: 15.00 J

★
printf 함수로 실수를 출력할 때 "%f"를 사용하면 소수점 아래 6자리를 출력한다.
만일 소수점 아래 2자리만 출력하려면 "%.2f"처럼 소수점 이하 자릿수를 지정한다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa03_04(void)
{
	int N, m;
	float result = 0.0;

	printf("힘(N)? ");
	scanf("%d", &N);

	printf("이동거리(m)? ");
	scanf("%d", &m);

	result = N * m;

	printf("일의 양: %.2f J", result);
}