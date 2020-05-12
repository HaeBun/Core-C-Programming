/*
4. 연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오. 윤년이 되는 조건은 다음과 같다.

4로 나누어 떨어지는 해는 윤년이다.
4로 나누어 떨어지는 해 중에서 100으로 나누어 떨어지는 해는 윤년이 아니다.
100으로 나누어 떨어지는 해 중에서 400으로 나누어 떨어지는 해는 윤년이다.

실행결과
연도? [2020]
2020년은 윤년입니다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_04(void)
{
	int year;
	printf("연도? ");
	scanf("%d", &year);

	if (year % 4 == 0) 
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				printf("%d년은 윤년입니다.", year);
			else
				printf("%d년은 평년입니다.", year);
		}
		else
			printf("%d년은 윤년입니다.", year);
	}
	else
		printf("%d년은 평년입니다.", year);

	return 0;
}