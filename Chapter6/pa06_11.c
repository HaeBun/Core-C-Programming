/*
11. 연산자와 2개의 피연산자를 인자로 받아와서 사칙연산을 수행하는 calculator 함수를 작성하시오. 
이때, 연산자는 문자로 받아오고, 피연산자는 실수로 받아온다. 
이 함수를 이용해서 "0 0 0"이 입력될 때까지 사칙연산의 결과를 구해서 출력하는 프로그램을 작성하시오.

실행결과
수식 (0 0 0 입력 시 종료)? [12.34 + 0.123]
12.463000
수식 (0 0 0 입력 시 종료)? [1234.34 * 0.012]
14.812080
수식 (0 0 0 입력 시 종료)? [0 0 0]

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
		printf("수식 (0 0 0 입력 시 종료)? ");
		scanf("%f %c %f", &a, &type, &b);
		if (a == 0 && type == '0' || b == 0)
			break;
		else {
			printf("%f\n", calculator(a, type, b));
		}
	}
}