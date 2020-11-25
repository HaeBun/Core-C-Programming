// 예제 10-14 : 열거체와 열거 상수의 정의 및 사용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum direction { NORTH, SOUTH, EAST, WEST };

int ex10_14(void)
{
	enum direction d1 = NORTH;		// 열거체 변수 선언

	d1 = EAST;						// 
	printf("d1 = %d\n", d1);		// 2가 출력된다.

	switch (d1)
	{
	case NORTH:						// 열거 상수는 case문에 사용할 수 있다.
		printf("북쪽으로 이동합니다.\n");
		break;
	case SOUTH:
		printf("남쪽으로 이동합니다.\n");
		break;
	case EAST:
		printf("동쪽으로 이동합니다.\n");
		break;
	case WEST:
		printf("서쪽으로 이동합니다.\n");
		break;
	}
	return 0;
}