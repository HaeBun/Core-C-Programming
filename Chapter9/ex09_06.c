// 에제 9-6 : 문자열의 검색
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int ex09_06(void)
{
	char filename[] = "readme.txt";
	char *p = NULL;

	p = strchr(filename, '.');
	if (p != NULL)
		printf("file extension: %s\n", p + 1);

	p = strstr(filename, ".txt");
	if (p != NULL)
		printf("file type: TEXT file\n");

	return 0;
}