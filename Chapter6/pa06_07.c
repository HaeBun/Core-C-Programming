/*
7. �Ҽ�(prime number)�� 1�� �ڱ� �ڽŸ����� ���������� �ڿ����̴�.
���ڷ� ���޹��� ������ �Ҽ����� �˻��ϴ� is_prime �Լ��� �ۼ��Ͻÿ�.
�� �Լ��� �̿��ؼ� 1���� N������ �Ҽ��� ���ؼ� ����ϰ� ��� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
N�� ����ڷκ��� �Է¹޴´�.

������
1~N������ �Ҽ��� ���մϴ�. N��? [ 100 ]
  2   3   5   7  11  13  17  19  23  29  31  37  41  43  47
 53  59  61  67  71  73  79  83  89  97

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int i) {
	int j;
	for (j = 2; i % j; j++);

	if (i == j) {
		return 1;
	}
	else {
		return 0;
	}
}

void main() {
	int i, j, N, cnt = 0;
	printf("1~N������ �Ҽ��� ���մϴ�. N��? ");
	scanf("%d", &N);

	for (i = 2; i <= N; ++i) {
		if (is_prime(i) == 1) {
			printf("%3d ", i);
			cnt++;
			if (cnt % 15 == 0) {
				printf("\n");
			}
		}
	}
	printf("\n�Ҽ��� ��� %d���Դϴ�.", cnt);
}