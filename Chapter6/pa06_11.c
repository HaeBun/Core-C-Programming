/*
11. �����ڿ� 2���� �ǿ����ڸ� ���ڷ� �޾ƿͼ� ��Ģ������ �����ϴ� calculator �Լ��� �ۼ��Ͻÿ�. 
�̶�, �����ڴ� ���ڷ� �޾ƿ���, �ǿ����ڴ� �Ǽ��� �޾ƿ´�. 
�� �Լ��� �̿��ؼ� "0 0 0"�� �Էµ� ������ ��Ģ������ ����� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
���� (0 0 0 �Է� �� ����)? [12.34 + 0.123]
12.463000
���� (0 0 0 �Է� �� ����)? [1234.34 * 0.012]
14.812080
���� (0 0 0 �Է� �� ����)? [0 0 0]

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float calculator(float a, char type, float b) 
{
	if (type == '+')
		return a + b;
	else if (type == '-')
		return a - b;
	else if (type == '*')
		return a * b;
	else if (type == '/')
		return a / b;
	else
		return 0;
}

int pa06_11()
{
	float a, b;
	char type;
	
	for (;;) {
		printf("���� (0 0 0 �Է� �� ����)? ");
		scanf("%f %c %f", &a, &type, &b);
		if (a == 0 && type == '0' || b == 0)
			break;
		else {
			printf("%f\n", calculator(a, type, b));
		}
	}
}