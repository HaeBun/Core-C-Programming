/*
12. �������� �˻��ϴ� is_leap_year �Լ��� �ۼ��Ͻÿ�. 
�� �Լ��� �̿��ؼ� 2000����� 2100�� ���̿� �ִ� ������ ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
2000~2100������ ����
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

	printf("2000~2100������ ����\n");

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