// 예제 10-12 : 비트필드의 정의 및 사용
#include <stdio.h>

typedef struct data {
	unsigned short year : 7;
	unsigned short month : 4;
	unsigned short day : 5;
	//unsigned short the_day_of_week : 3;
} DATE;

int ex10_12(void)
{
	DATE dday;
	dday.year = 18;	// 연도를 0~99사이의 값으로 저장한다.
	dday.month = 11;
	dday.day = 30;

	printf("DATE의 크기 = %d\n", sizeof(DATE));
	printf("%d/%d/%d\n", dday.year + 2000, dday.month, dday.day);

	return 0;
}