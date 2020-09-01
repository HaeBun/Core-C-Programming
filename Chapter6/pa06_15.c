/*
15. ������ �� ��° �ڸ����� �ݿø����� �����ϴ� round_pos �Լ��� �ۼ��Ͻÿ�.
���� ��� round_pos(12345, 1);�� 12350�� �����ϰ� round_pos(12345, 2);�� 12300�� �����ؾ� �Ѵ�.
1357�� 1~3��° �ڸ����� �ݿø��� ����� ���� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
1��° �ڸ����� �ݿø��� ���: 1360
2��° �ڸ����� �ݿø��� ���: 1400
3��° �ڸ����� �ݿø��� ���: 1000
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int round_pos(int value, int digit) {
	if (digit / 2 < value % digit)
		value = value - (value % digit) + digit;
	else
		value = value - (value % digit);
	return value;
}

void pa06_15() {
	int i, value = 1357;
	
	for (i = 1; value >= pow(10, i); i++) {
		printf("%d��° �ڸ����� �ݿø��� ���: %d\n", i, round_pos(value, pow(10, i)));
	}
}
