/*
8. ��Ʈ ������ �����ϴ� ���⸦ ���α׷��Ͻÿ�.
&�� ��Ʈ AND, |�� ��Ʈ OR, ^�� ��Ʈ XOR ������ ó���Ѵ�.
" 0xAB & 0xCC"ó�� ������� �Է��ؼ� �������� ���Ѵ�.
��Ʈ �����̹Ƿ� ������� �Է¹��� �� 10����, 8����, 16������ ����� �� �ְ� �ϰ�, ������ ����� 16������ ����Ѵ�.

������
��Ʈ �����? [0x12345678 & 0xFF00FF00]
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_08(void)
{
	unsigned int x, y, result = 0;
	char ch;
	printf("��Ʈ �����? ");
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