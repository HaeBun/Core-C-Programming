/*
17. ���п��� ��������(multiset)�� ������ �ߺ��� ����Ѵ�.
�ִ� 10���� ������ ���Ҹ� ������ �� �ִ� ���������� ���α׷��Ͻÿ�.
������ �Է¹޾� ������ ���Ҹ� �߰��ϰ�, �� ������ ������ ���ҵ��� ����Ͻÿ�.

������
�迭�� �߰��� ����? [ 10 ]
10
�迭�� �߰��� ����? [ 20 ]
10 20
�迭�� �߰��� ����? [ 10 ]
10 20 10
...
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pa07_17() {
	int cnt = 0, i;
	int arr[10];

	while (cnt < 10) {
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &arr[cnt]);
		for (i = 0; i <= cnt; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		cnt++;
	}
}