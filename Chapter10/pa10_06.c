/*
6. DATE ����ü�� 2���� �Ű������� ���޹޾� ��¥�� ������ ���ϴ� is_same_date �Լ��� �����Ͻÿ�.
DATE ����ü �迭�� �����ؼ� �����Ͽ� �ش��ϴ� ��¥�� �ʱ�ȭ�� ���� �Է¹��� ��¥�� ���������� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է¹��� ��¥�� "0 0 0"�̸� ���α׷��� �����Ѵ�.

������
��¥(������)? [ 2019 1 1 ]
2019/1/1�� �������Դϴ�.
��¥(������)? [ 2019 1 2 ]
2019/1/2�� �������� �ƴմϴ�.
��¥(������)? [ 0 0 0 ]
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
		printf("��¥(������)? ");
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
			printf("%d/%d/%d�� �������Դϴ�.\n", data.year, data.month, data.day);
			is_holiday = 1;
			break;
		}
	}

	if(is_holiday == 0)
		printf("%d/%d/%d�� �������� �ƴմϴ�.\n", data.year, data.month, data.day);
}