/*
4. �������� ��Ÿ���� DATE ����ü�� DATE ����ü�� �Ű������� ���޹޾� ��¥�� "2019/1/1" ó�� ����ϴ� print_date �Լ��� �����Ͻÿ�.
DATE ����ü�� print_data �Լ��� �̿��ؼ� �Է¹��� ��¥�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������

��? [ 2019 ]
��? [ 1 ]
��? [ 1 ]
2019/1/1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_date_1(DATE);

typedef struct date {
	int year;
	int month;
	int day;
}DATE;

void pa10_04() {
	DATE data;

	printf("��? ");
	scanf("%d", &data.year);
	printf("��? ");
	scanf("%d", &data.month);
	printf("��? ");
	scanf("%d", &data.day);

	print_date_1(data);
}

void print_date_1(DATE data) {
	printf("%d/%d/%d", data.year, data.month, data.day);
}