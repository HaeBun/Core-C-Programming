/*
8. 비트 연산을 수행하는 계산기를 프로그램하시오.
&는 비트 AND, |는 비트 OR, ^는 비트 XOR 연산을 처리한다.
" 0xAB & 0xCC"처럼 연산식을 입력해서 연산결과를 구한다.
비트 연산이므로 연산식을 입력받을 때 10진수, 8진수, 16진수를 사용할 수 있게 하고, 연산의 결과는 16진수로 출력한다.

실행결과
비트 연산식? [0x12345678 & 0xFF00FF00]
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_08(void)
{
	unsigned int x, y, result = 0;
	char ch;
	printf("비트 연산식? ");
	scanf("%x %c %x", &x, &ch, &y);

	if (ch == '&')
	{
		result = x & y;
	}
	else if (ch == '^')
	{
		result = x ^ y;
	}
	else if (ch == '|')
		result = x | y;

	printf("%X %c %X = %8x", x, ch, y, result);
}