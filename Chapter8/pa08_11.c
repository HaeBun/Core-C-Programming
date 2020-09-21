/*
11. 직사각형의 넓이와 둘레를 구하는 get_rect_info 함수를 작성하시오.
직사각형의 가로, 세로의 길이를 입력받은 다음 get_rect_info 함수를 이용해서 직사각형의 넓이와 둘레를 구해서 출력하는 프로그램을 작성하시오

실행결과
가로? [10]
세로? [20]
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void get_rect_info(int* width, int* height) {
	printf("넓이: %d, 둘레 %d", (width[0] * height[0]), (width[0]*2)+(height[0]*2));
}
void main() {
	int width, height;

	printf("가로? ");
	scanf("%d", &width);

	printf("세로? ");
	scanf("%d", &height);

	get_rect_info(&width, &height);
}