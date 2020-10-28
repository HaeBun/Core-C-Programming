// 예제 9-7 : 문자열의 토큰 나누기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int ex09_07(void)
{
	char phone[] = "02-123-4567";
	char *p = NULL;

	p = strtok(phone, "-");
	printf("area code: %s\n", p);
	p = strtok(NULL, "-");
	printf("prefix: %s\n", p);
	p = strtok(NULL, "-");
	printf("line numper: %s\n", p);

	return 0;
}