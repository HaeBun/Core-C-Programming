// else if�� �̿��� ��Ģ���� ����

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int ex05_07(void)
{
	int a, b;		// �ǿ�����
	char op;		// ������ ��ȣ�� ���ڷ� ������ ����

	printf("����? ");
	scanf("%d %c %d", &a, &op, &b);		// 10 + 30 ���·� �Է¹޴´�.

	if (op == '+') {
		printf("%d + %d = %d\n", a, b, a + b);
	}
	else if (op == '-') {
		printf("%d - %d = %d\n", a, b, a - b);
	}
	else if (op == '*') {
		printf("%d * %d = %d\n", a, b, a * b);
	}
	else if (op == '/') {
		if (b != 0) // ��ø�� if
			printf("%d / %d = %.2f\n", a, b, (double)a / b);
		else
			printf("0���� ���� �� �����ϴ�.\n");
	}
	else {
		printf("�߸��� �����Դϴ�.\n");
	}

	return 0;
}