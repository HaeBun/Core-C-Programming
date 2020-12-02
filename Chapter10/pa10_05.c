/*
5. DATE 구조체를 매개변수로 전달받아 날짜를 오늘 날짜로 지정하는 set_as_today 함수를 정의하시오.
시스템을오부터 현재 날짜와 시간을 구할 때는 <time.h>의 time 함수와 localtime 함수를 이용한다.
DATE 구조체와 set_as_today, print_date 함수를 이용해서 오늘 날짜를 출력하는 프로그램을 작성하시오.

실행결과

오늘 날짜는 2019/1/1 입니다.

★
<time.h>의 time 함수와 localtime 함수를 이용해서 오늘 날짜를 구하는 방법은 다음과 같다.
localtime 함수가 리턴하는 tm 구조체의 멤버로부터 연(tm_year), 월(tm_mon), 일(tm_mday) 값을 읽어서 사용하면 된다.
time_t t = time(NULL);				// 시스템 시간을 time_t라는 인코딩된 값으로 읽어 온다.
struct tm *today = localtime(&t);	// time_t형의 값을 tm 구조체로 변환한다.
int y, m, d;
y = today->tm_year + 1900;			// tm_year 멤버: 연도에서 1900을 뺀 값
m = today->tm_mon + 1;				// tm_mon 멤버: 0~11사이의 값
d = today->tm_mday;					// tm_mday 멤버: 1~31사이의 값
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

typedef struct date {
	int year;
	int month;
	int day;
}DATE;

void set_as_today(DATE *data);
void print_date_2(DATE data);

void pa10_05() {
	DATE data = { 0, 0, 0 };
	set_as_today(&data);
	
	print_date_2(data);
}

void set_as_today(DATE *data) {
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

void print_date_2(DATE data) {
	printf("오늘 날짜는 %d/%d/%d 입니다.", data.year, data.month, data.day);
}