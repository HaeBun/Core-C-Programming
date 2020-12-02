/*
6. DATE 구조체를 2개를 매개변수로 전달받아 날짜가 같은지 비교하는 is_same_date 함수를 정의하시오.
DATE 구조체 배열을 선언해서 공휴일에 해당하는 날짜로 초기화한 다음 입력받은 날짜가 공휴일인지 검사하는 프로그램을 작성하시오.
입력받은 날짜가 "0 0 0"이면 프로그램을 종료한다.

실행결과
날짜(연월일)? [ 2019 1 1 ]
2019/1/1은 공휴일입니다.
날짜(연월일)? [ 2019 1 2 ]
2019/1/2은 공휴일이 아닙니다.
날짜(연월일)? [ 0 0 0 ]
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct date {
	int year;
	int month;
	int day;
}DATE;

void is_same_date(DATE, DATE public_holiday[]);

void pa10_06() {
	DATE public_holiday[] = {
		{ 2020,  1,  1 }, { 2020,  1, 24 },
		{ 2020,  1, 25 }, { 2020,  1 ,26 },
		{ 2020,  1, 27 }, { 2020,  3,  1 },
		{ 2020,  4, 15 }, { 2020,  4, 30 },
		{ 2020,  5,  5 }, { 2020,  6,  6 },
		{ 2020,  8, 15 }, { 2020,  9, 30 },
		{ 2020, 10,  1 }, { 2020, 10,  2 },
		{ 2020, 10,  3 }, { 2020, 10,  9 },
		{ 2020, 12, 25 }
	};
	DATE data;
	int year, month, day;
	while (1)
	{
		printf("날짜(연월일)? ");
		scanf("%d %d %d", &year, &month, &day);

		if (year == 0 && month == 0 && day == 0)
			break;

		data.year  = year;
		data.month = month;
		data.day   = day;

		is_same_date(data, public_holiday);
	}

}

void is_same_date(DATE data, DATE public_holiday[]) {
	int size = 17;
	int i;
	int is_holiday = 0;

	for (i = 0; i < size; i++) {
		if (data.year == public_holiday[i].year && data.month == public_holiday[i].month && data.day == public_holiday[i].day) {
			printf("%d/%d/%d은 공휴일입니다.\n", data.year, data.month, data.day);
			is_holiday = 1;
			break;
		}
	}

	if(is_holiday == 0)
		printf("%d/%d/%d은 공휴일이 아닙니다.\n", data.year, data.month, data.day);
}