/*
5. DATE ����ü�� �Ű������� ���޹޾� ��¥�� ���� ��¥�� �����ϴ� set_as_today �Լ��� �����Ͻÿ�.
�ý����������� ���� ��¥�� �ð��� ���� ���� <time.h>�� time �Լ��� localtime �Լ��� �̿��Ѵ�.
DATE ����ü�� set_as_today, print_date �Լ��� �̿��ؼ� ���� ��¥�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������

���� ��¥�� 2019/1/1 �Դϴ�.

��
<time.h>�� time �Լ��� localtime �Լ��� �̿��ؼ� ���� ��¥�� ���ϴ� ����� ������ ����.
localtime �Լ��� �����ϴ� tm ����ü�� ����κ��� ��(tm_year), ��(tm_mon), ��(tm_mday) ���� �о ����ϸ� �ȴ�.
time_t t = time(NULL);				// �ý��� �ð��� time_t��� ���ڵ��� ������ �о� �´�.
struct tm *today = localtime(&t);	// time_t���� ���� tm ����ü�� ��ȯ�Ѵ�.
int y, m, d;
y = today->tm_year + 1900;			// tm_year ���: �������� 1900�� �� ��
m = today->tm_mon + 1;				// tm_mon ���: 0~11������ ��
d = today->tm_mday;					// tm_mday ���: 1~31������ ��
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

void print_date_2(DATE data) {
	printf("���� ��¥�� %d/%d/%d �Դϴ�.", data.year, data.month, data.day);
}