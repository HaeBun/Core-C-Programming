/*
13. ������ ���� ���ڷ� ���޹޾� �� ���� ��ĥ���� �����ϴ� get_days_of_month �Լ��� �ۼ��Ͻÿ�.
�̶�, �տ��� �ۼ��� is_leap_year �Լ��� �̿��ص� �ȴ�.
get_days_of_month �Լ��� �̿��ؼ� �Է¹��� ������ 1������ 21�������� ��¥���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
����? [ 2020 ]
[ 2020�� ]
 1��: 31��	2��: 29��	3��: 31��	4��: 30��	5��: 31��	6��: 30��
 7��: 31��	8��: 31��	9��: 30��  10��: 31��  11��: 30��  12��: 31��

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
	printf("����? ");
	scanf("%d", &year);
	printf("[ %d�� ]\n", year);
	for (int i = 0; i < 12; i++) {
		printf("%3d��: %d��", i + 1, get_days_of_month(year, i));
		cnt++;

		if (cnt > 6) {
			printf("\n");
			cnt = 0;
		}
	}
}
