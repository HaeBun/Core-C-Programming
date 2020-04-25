/*
2. 학생의 학점과 이름을 입력받아 출력하는 프로그램을 작성하시오. 학생의 이름은 문자열로, 학점은 실수로 입력받는다.

실행결과
이름? [차은우]
학점? [4.3]
차은우의 학점은 4.300000입니다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa02_02(void)
{
	char name[20];
	float score = 0.0;

	printf("이름? ");
	scanf("%s", name);
	printf("학점? ");
	scanf("%f", &score);
	printf("%s의 학점은 %f입니다.", name, score);

}