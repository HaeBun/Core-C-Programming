// �ݺ� ����Ǵ� ��Ģ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex05_15(void)
{
	int a, b;
	char op;
	char yesno = 'Y';

	while (yesno == 'Y' || yesno == 'y')
	{
		printf("����? ");
		scanf("%d %c %d", &a, &op, &b);

		switch (op) {
		case '+':
			printf("%d + %d = %d\n", a, b, a + b);
			break;

		case '-':
			printf("%d - %d = %d\n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d\n", a, b, a * b);
			break;
		case '/':
			if (b != 0)
				printf("%d / %d = %.2f\n", a, b, (double)a / b);
			else
				printf("0���� ���� �� �����ϴ�.\n");
			break;

		default:
			printf("�߸��� �����Դϴ�.\n");
			break;
		}
		printf("��� �Ͻðڽ��ϱ�(Y/N)? ");
		scanf(" %c", &yesno);
	}

	return 0;
}