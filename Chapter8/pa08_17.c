/*
17. ���п��� ��������(multiset)�� ������ �ߺ��� ����Ѵ�.
������ �迭�� �迭�� ũ��, ���� ����ִ� ������ ������ �Ű������� �����ؼ� ���Ҹ� �߰��ϴ� add_to_multiset �Լ��� �ۼ��Ͻÿ�.
add_to_multiset�� ȣ��ǰ� ���� ���� ����ִ� ������ ������ �����Ǿ�� �Ѵ�.
���Ҵ� �ִ� �迭�� ũ�⸸ŭ�� �߰��� �� �ִ�.
���� �� �̻� ���Ҹ� �߰��� �� ������ 0�� �����ϰ�, ���Ҹ� �߰��ϴ� ��쿡�� 1�� �����Ѵ�.
add_to_multiset �Լ��� �̿��ؼ� �Է¹��� ������ ������ ���Ҹ� �߰��ϰ�, �� ������ ������ ���ҵ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�迭�� �߰��� ����? [ 10 ]
10
�迭�� �߰��� ����? [ 20 ]
10 20
�迭�� �߰��� ����? [ 10 ]
10 20 10
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add_to_multiset(int* arr, int arr_size, int count) {
	int i;

	if (count < 10) {
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &arr[count]);
		for (i = 0; i <= count; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return 1;
	}

	return 0; 
}

void pa08_17() {
	int count = 0, i;
	int arr[10];

	for (;;) {
		if (add_to_multiset(arr, 10, count) == 0) {
			break;
		}
		count++;
	}
}