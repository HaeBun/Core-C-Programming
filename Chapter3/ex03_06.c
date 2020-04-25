// 특수 문자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex03_06(void)
{
	char bell = '\b'; // 특수 문자
	printf("%c프로그램을 시작합니다.\n", bell); // 경고음 발생

	printf("c:\\work\\chap03\\Ex03_06\\debug\n"); // 역슬래시 출력

	printf("\t탭 문자를 출력합니다.\n"); // 탭 문자 출력

	return 0;
}