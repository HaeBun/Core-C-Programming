/*
16. ������ �迭�� Ű ���� �Ű������� ���޹޾� �迭���� Ű ���� ã�� �ε����� �����ϴ� find_array �Լ��� �ۼ��Ͻÿ�.
���� Ű ���� ã�� �� ������ -1�� �����Ѵ�.

������
23 45 62 12 99 83 23 50 72 37
ã�� ��? [ 12 ]
12�� 3��° �����Դϴ�.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fine_array(int key, int arr[]) {
	int i;
	for (i = 0; i < 10; i++) {
		if (key == arr[i]) {
			return i;
			break;
		}
	}

	return -1;
}

void pa07_16() {
	int arr[10] = { 23, 45, 62, 12 ,99, 83, 23, 50, 72, 37 };
	int i, key, chk = 0;

	printf("�迭:");
	for (i = 0; i < 10; i++) {
		printf(" %d", arr[i]);
	}

	printf("\nã�� ��? ");
	scanf("%d", &key);

	if (fine_array(key, arr) != -1) {
		printf("%d�� %d��° �����Դϴ�.", key, fine_array(key, arr));
	}
	else {
		printf("ã���ô� ���Ұ� �����ϴ�.");
	}
}