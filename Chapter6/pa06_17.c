/*
17. 인자로 전달된 점의 좌표가 어느 사분면의 점인지 리턴하는 get_quadrant 함수를 작성하시오.
1~4사분면이면 1~4를 리턴하고, 원점이나 x축 또는 y축 위의 점은 0을 리턴하도록 작성하시오.
get_quadrant 함수를 이용해서 입력받은 점의 좌표가 어느 사분면의 점인지 출력하는 프로그램을 작성하시오.

실행결과
점의 좌표 (x, y)? 10 20
1사분면의 점입니다.
점의 좌표 (x, y)? -10 20
2사분면의 점입니다.
점의 좌표 (x, y)? 0 0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_quadrant(int x, int y) {
	if (x > 0 && y > 0)
		return 1;
	else if (x < 0 && y > 0)
		return 2;
	else if (x < 0 && y < 0)
		return 3;
	else if (x > 0 && y < 0)
		return 4;
	else
		return 0;
}

void pa06_17() {
	int x, y;
	int quadrent;

	do {
		printf("점의 좌표 (x,y)? ");
		scanf("%d %d", &x, &y);
		
		quadrent = get_quadrant(x, y);

		if (quadrent > 0) {
			printf("%d사분면의 점입니다.\n", quadrent);
		}
		

	} while (quadrent != 0);
}
