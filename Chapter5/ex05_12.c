// 입력된 문자로 직사각형 그리기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ex05_12(void)
{
	int width, height;
	char ch;
	int i, j;
	printf("직사각형의 폭과 높이? ");
	scanf("%d %d", &width, &height);
	printf("직사각형을 그릴 문자? ");
	scanf(" %c", &ch);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}