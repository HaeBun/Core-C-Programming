// do while을 이용한 사칙연산 계산기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ex05_17(void)
{
	int a, b;
	char op;
	char yesno;

	do {
		printf("수식? ");
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
				printf("0으로 나눌 수 없습니다.\n");
			break;

		default:
			printf("잘못된 수식입니다.\n");
			break;
		} 
		printf("계속 하시겠습니까(Y/N)? ");
		scanf(" %c", &yesno);

	} while (yesno == 'Y' || yesno == 'y');

	return 0;
}