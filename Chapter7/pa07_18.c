/*
18. ���п��� ����(set)�� ��������(multiset)�� �ٸ��� ������ �ߺ��� ������� �ʴ´�.
�ִ� 10���� ������ ���Ҹ� ������ �� �ִ� ����(set)�� �����Ͻÿ�.
������ �Է¹޾� ������ ���ҷ� �߰��ϰ�, �� ������ ������ ���ҵ��� ����Ͻÿ�.

������
�迭�� �߰��� ����? [ 10 ]
10
�迭�� �߰��� ����? [ 20 ]
10 20
�迭�� �߰��� ����? [ 10 ]
�ش� ���Ұ� �̹� [0]�� �����մϴ�.
10 20
...
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int overlap_check(int arr[], int length) {
	int i, j;
	for (i = 0; i <= length; i++) {
		for (j = i + 1; j <= length; j++) {
			if (arr[i] == arr[j]) {
				arr[j] = NULL;
				return i;
			}
		}
	}
	return -1;
}

void pa07_18() {
	int i, j;
	int arr[10];

	for (i = 0; i < 10;) {
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &arr[i]);

		int chk = overlap_check(arr, i);
		if (chk != -1) {
			printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", chk);
			for (j = 0; j < i; j++) {
				printf("%d ", arr[j]);
			}
			printf("\n");
			continue;
		}
		for (j = 0; j <= i; j++) {
			printf("%d ", arr[j]);
		}

		printf("\n");
		i++;
	}
}