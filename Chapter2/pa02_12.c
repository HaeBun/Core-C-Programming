/*
11. 학생의 이름, 학과, 학생 번호를 입력받아 다음과 같은 리포트 헤더를 출력하는 프로그램을 작성하시오.

실행결과
이름? [차은우]
학과? [컴퓨터공학과]
학번? [CE1814032]

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_12(void)
{
	char name[20], department[20], cls[20];

	printf("이름? ");
	scanf("%s", name);
	printf("학과? ");
	scanf("%s", department);
	printf("학번? ");
	scanf("%s", cls);

	printf("=====================================\n");
	printf(" 이름: %s\n", name);
	printf(" 학과: %s\n", department);
	printf(" 학번: %s\n", cls);
	printf("=====================================\n");
}