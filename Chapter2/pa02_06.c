/*
6. 옷 사이즈를 선택하게 하고 선택된 사이즈를 출력하는 프로그램을 작성하시오.
옷 사이즈는 S, M, L 세 가지 문자 중 하나로 입력받는다.

실행결과
옷 사이즈(S,M,L)? [M]
M 사이즈를 선택했습니다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_06(void)
{
	char size;

	printf("옷 사이즈(S,M,L)? ");
	scanf("%c", &size);

	printf("%c 사이즈를 선택했습니다.", size);
}