/*
14. ��, ��, ���� ���ڷ� ���޹޾� ��ȿ�� ��¥���� �˻��ϴ� check_date �Լ��� �ۼ��Ͻÿ�.
���ڷ� �Ѱ� ���� ��¥�� ��ȿ�� ��¥�� 1��, �ƴϸ� 0�� �����Ѵ�. 
�̶�, �տ��� �ۼ��� is_leap_year �Լ��� get_days_of_month �Լ��� �̿��ص� ����.
check_date �Լ��� �Է��ؼ� ��¥�� �Է¹޴� ���α׷��� �ۼ��Ͻÿ�.
���� ����ڰ� �߸��� ��¥�� �Է��ϸ� ��ȿ�� ��¥�� �Է��� ������ ����ؼ� �ٽ� �Է¹޵��� ó���Ѵ�.

������
��¥ (�� �� ��)? [ 2019 13 1 ]
�߸� �Է��ϼ̽��ϴ�. ��ȿ�� ��¥�� �Է��ϼ���.
��¥ (�� �� ��)? [ 2019 1 40 ]
�߸� �Է��ϼ̽��ϴ�. ��ȿ�� ��¥�� �Է��ϼ���.
��¥ (�� �� ��)? [ 2019 1 1 ]
�Է��� ��¥�� 2019�� 1�� 1���Դϴ�.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_date(int year, int month, int day) {
	if (month > 12 || day > get_days_of_month(year)) {
		return 0;
	}
	else {
		return 1;
	}
}

void pa06_14() {
	int chk = 0;
	do {
		int year, month, day;
		printf("��¥ (�� �� ��)? ");
		scanf("%d %d %d", &year, &month, &day);

		if (check_date(year, month, day) == 1) {
			printf("�Է��� ��¥�� %d�� %d�� %d���Դϴ�.", year, month, day);
			chk++;
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�. ��ȿ�� ��¥�� �Է��ϼ���.\n");
		}
	} while (chk == 0);
}