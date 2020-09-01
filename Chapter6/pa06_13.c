/*
13. 연도와 월을 인자로 전달받아 그 달이 며칠인지 리턴하는 get_days_of_month 함수를 작성하시오.
이때, 앞에서 작성한 is_leap_year 함수를 이용해도 된다.
get_days_of_month 함수를 이용해서 입력받은 연도의 1월부터 21월까지의 날짜수를 출력하는 프로그램을 작성하시오.

실행결과
연도? [ 2020 ]
[ 2020년 ]
 1월: 31일	2월: 29일	3월: 31일	4월: 30일	5월: 31일	6월: 30일
 7월: 31일	8월: 31일	9월: 30일  10월: 31일  11월: 30일  12월: 31일

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_days_of_month(int year, int month) {
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };

	if (is_leap_year(year)==1) {
		days[1] += 1;
	}

	return days[month];
}

void pa06_13() {
	int year, cnt = 0;
	printf("연도? ");
	scanf("%d", &year);
	printf("[ %d년 ]\n", year);
	for (int i = 0; i < 12; i++) {
		printf("%3d월: %d일", i + 1, get_days_of_month(year, i));
		cnt++;

		if (cnt > 6) {
			printf("\n");
			cnt = 0;
		}
	}
}
