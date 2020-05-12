/*
2. 이차원 평면에 있는 점의 좌표 (x, y)를 입력받아 어느 사분면의 점인지 출력하는 프로그램을 작성하시오.

실행결과
점의 좌표 (x, y)? [10 -10]
4사분면에 있습니다.

★
중첩된 if를 사용해서 구현하는 경우와 else if를 사용해서 구현하는 경우를 비교해보자.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa05_02(void)
{
	int x, y;

	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0)
		if (y > 0)
			printf("1사분면에 있습니다.");
		else
			printf("4사분면에 있습니다.");
	else
		if (y > 0)
			printf("2사분면에 있습니다.");
		else
			printf("3사분면에 있습니다.");

	return 0;

/* else if를 사용해서 구현하는 경우

	if(x > 0 && y > 0)
		printf("1사분면에 있습니다.");
	else if(x > 0 && y < 0)
		printf("4사분면에 있습니다.");
	else if(x < 0 && y > 0)
		printf("2사분면에 있습니다.");
	else if(x < 0 && y < 0)
		printf("3사분면에 있습니다.");
		
*/
}