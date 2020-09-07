/*
7. �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� reverse_array �Լ��� �ۼ��Ͻÿ�.
ũ�Ⱑ 10�� double �迭�� ���ؼ� ���ϴ� ������ �ʱⰪ�� ä�� ���� reverse_array �Լ��� ȣ�� ����� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
�迭: 1.2 3.1 4.3 4.5 6.7 2.3 8.7 9.5 2.3 5.8
����: 5.8 2.3 9.5 8.7 2.3 6.7 4.5 4.3 3.1 1.2
*/
#include <stdio.h>

void reverse_array(double *p) {
	float temp;
	int i;

	for (i = 0; i < 5; i++) {
		temp = p[9-i];
		p[9-i] = p[i];
		p[i] = temp;
	}

}

void pa08_07() {
	int i;
	double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	double *p = arr;

	printf("�迭:");
	for (i = 0; i < 10; i++)
		printf(" %.02f", arr[i]);

	reverse_array(p);

	printf("\n����:");

	for (i = 0; i < 10; i++)
		printf(" %.02f", arr[i]);
}