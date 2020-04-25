// 여러 개의 서식 지정자 사용하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex02_06()
{
	char name[20];
	int age;
	char gender;

	printf("이름, 나이, 성별(M/F) 순으로 입력하세요.\n");
	scanf("%s %d %c", name, &age, &gender);		// 3개의 변수 입력
	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("성별: %c\n", gender);

	return 0;
}