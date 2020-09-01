/*
12. 윤년인지 검사하는 is_leap_year 함수를 작성하시오. 
이 함수를 이용해서 2000년부터 2100년 사이에 있는 윤년을 모두 구해서 출력하는 프로그램을 작성하시오.

실행결과
2000~2100사이의 윤년
 2000 2004 2008 2012 2016 2020 2024 2028 2032 2036
 2040 2044 2048 2052 2056 2060 2064 2068 2072 2076
 2080 2084 2088 2092 2096
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap_year(int year) {
	if ( year % 4 == 0 && ( year % 400 == 0 || year % 100 != 0 )) {
		return 1;
	}
	else {
		return 0;
	}
}
void pa06_12() {

	printf("2000~2100사이의 윤년\n");

	int i, cnt = 0;
	for (i = 2000; i < 2100; i++) {
		if (is_leap_year(i) != 0) {
			printf(" %d", i);
			cnt++;
		}
		if (cnt >= 10) {
			printf("\n");
			cnt = 0; 
		}
	}
}