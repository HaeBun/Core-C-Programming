// else if를 이용한 사칙연산 계산기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int ex05_07(void)
{
	int a, b;		// 피연산자
	char op;		// 연산자 기호를 문자로 저장할 변수

	printf("수식? ");
	scanf("%d %c %d", &a, &op, &b);		// 10 + 30 형태로 입력받는다.

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
		if (b != 0) // 중첩된 if
			printf("%d / %d = %.2f\n", a, b, (double)a / b);
		else
			printf("0으로 나눌 수 없습니다.\n");
	}
	else {
		printf("잘못된 수식입니다.\n");
	}

	return 0;
}