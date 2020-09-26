/*
18. ���п��� ����(set)�� ��������(multiset)�� �ٸ��� ������ �ߺ��� ������� �ʴ´�.
������ �迭�� �迭�� ũ��, ���� ����ִ� ������ ������ �Ű������� �����ؼ� ���Ҹ� �߰��ϴ� add_to_set �Լ��� �ۼ��Ͻÿ�.
add_to_set�� ȣ��ǰ� ���� ���� ����ִ� ������ ������ �����Ǿ�� �Ѵ�.
���Ҵ� �ִ� �迭�� ũ�⸸ŭ�� �߰��� �� �ִ�.
���� �� �̻� ���Ҹ� �߰��� �� ���ų� �̹� ���� ���� ���Ұ� ������ 0�� �����ϰ�, ���Ҹ� �߰��ϴ� ��쿡�� 1�� �����Ѵ�.
add_to_set �Լ��� �̿��ؼ� �Է¹��� ������ ������ ���Ҹ� �߰��ϰ�, �� ������ ������ ���ҵ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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

int add_to_set(int* arr, int arr_size, int count) {
	int i, j;

	if (count < 10) {
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &arr[count]);

		int i, j;
		for (i = 0; i <= count; i++) {
			for (j = i + 1; j <= count; j++) {
				if (arr[i] == arr[j]) {
					arr[j] = NULL;
					return 0;
				}
			}
		}
		return 1;
	}
	return 0;
}

void pa08_18() {
	int count = 0, i;
	int arr[10];

	for (;;) {
		int chk = add_to_set(arr, 10, count);
		if (chk != 1) {
			printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", chk);
			for (i = 0; i < count; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");
			continue;
		}
		else {
			for (i = 0; i <= count; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
		count++;
		if (count >= 10) {
			break;
		}
	}
}