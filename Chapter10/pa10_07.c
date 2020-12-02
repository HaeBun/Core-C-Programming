/*
7. 날짜에서 월은 1~12사이의 값이다. 
월을 나타내는 열거체와 열거 상수를 정의하고, 이 열거체를 이용하도록 DATE 구조체의 정의를 변경하시오. 
날짜를 "Jan 1 2019" 형식으로 출력하는 print_date_eng 함수를 정의하시오. 
set_as_today 함수와 print_date_eng 함수를 이용해서 오늘 날짜를 영어식 표기법으로 출력하는 프로그램을 작성하시오.

실행결과
Today is Jan 1 2019

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

enum month { Jan=1, Feb=2, Mar=3, Apr=4, May=5, Jun=6, Jul=7, Aug=8, Sep=9, Oct=10, Nov=11, Dec=12 };

typedef struct date {
	int year;
	int month;
	int day;
}DATE;

void set_as_today_2(DATE* data);
char print_date_eng(DATE);

void pa10_07() {
	DATE data;
	set_as_today_2(&data);
	print_date_eng(data);
}

void set_as_today_2(DATE* data) {
	time_t t = time(NULL);				// 시스템 시간을 time_t라는 인코딩된 값으로 읽어 온다.
	struct tm* today = localtime(&t);	// time_t형의 값을 tm 구조체로 변환한다.
	int y, m, d;
	y = today->tm_year + 1900;			// tm_year 멤버: 연도에서 1900을 뺀 값
	m = today->tm_mon + 1;				// tm_mon 멤버: 0~11사이의 값
	d = today->tm_mday;					// tm_mday 멤버: 1~31사이의 값

	data->year = y;
	data->month = m;
	data->day = d;
}

char print_date_eng(DATE data) {
	enum month m;
	int i;
	m = data.month;

	switch (m)
	{
	case Jan:
		printf("Jan %d %d", data.day, data.year);
		break;
	case Feb:
		printf("Feb %d %d", data.day, data.year);
		break;
	case Mar:
		printf("Mar %d %d", data.day, data.year);
		break;
	case Apr:
		printf("Apr %d %d", data.day, data.year);
		break;
	case May:
		printf("May %d %d", data.day, data.year);
		break;
	case Jun:
		printf("Jun %d %d", data.day, data.year);
		break;
	case Jul:
		printf("Jul %d %d", data.day, data.year);
		break;
	case Aug:
		printf("Aug %d %d", data.day, data.year);
		break;
	case Sep:
		printf("Sep %d %d", data.day, data.year);
		break;
	case Oct:
		printf("Oct %d %d", data.day, data.year);
		break;
	case Nov:
		printf("Nov %d %d", data.day, data.year);
		break;
	case Dec:
		printf("Dec %d %d", data.day, data.year);
		break;
	default:
		break;
	}
}
