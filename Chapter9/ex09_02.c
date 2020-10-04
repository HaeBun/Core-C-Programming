// 예제 9-2 : strlen 함수의 사용 예
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int ex09_02(void) 
{
	char s1[] = "hello";
//	char s2[] = "";	// 널 문자열 // 오류가 인해 주석 처리
	int len = 0;

	printf("s1의 길이: %d\n", strlen(s1));
	printf("s2의 길이: %d\n", strlen(""));
	printf("길이: %d\n", strlen("bye bye"));
	printf("s1의 크기: %d\n", sizeof(s1));; // 널 문자를 포함한 배열의 크기

	len = strlen(s1);
	if (len > 0)
		s1[len - 1] = '\0';
	printf("s1 = %s\n", s1);

	return 0;
}