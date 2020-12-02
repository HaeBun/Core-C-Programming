/*
7. ��¥���� ���� 1~12������ ���̴�. 
���� ��Ÿ���� ����ü�� ���� ����� �����ϰ�, �� ����ü�� �̿��ϵ��� DATE ����ü�� ���Ǹ� �����Ͻÿ�. 
��¥�� "Jan 1 2019" �������� ����ϴ� print_date_eng �Լ��� �����Ͻÿ�. 
set_as_today �Լ��� print_date_eng �Լ��� �̿��ؼ� ���� ��¥�� ����� ǥ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
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
	time_t t = time(NULL);				// �ý��� �ð��� time_t��� ���ڵ��� ������ �о� �´�.
	struct tm* today = localtime(&t);	// time_t���� ���� tm ����ü�� ��ȯ�Ѵ�.
	int y, m, d;
	y = today->tm_year + 1900;			// tm_year ���: �������� 1900�� �� ��
	m = today->tm_mon + 1;				// tm_mon ���: 0~11������ ��
	d = today->tm_mday;					// tm_mday ���: 1~31������ ��

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
