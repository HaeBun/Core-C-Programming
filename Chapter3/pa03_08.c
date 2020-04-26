/*
8. 길이를 야드(yd)로 입력받아 미터(m)로 변환해서 출력하는 프로그램을 작성하시오.
1yd는 0.9144m에 해당한다.

실행결과
길이(yd)? [100]
100 yd = 91.440000 m

*/

#define _CRT_SECURE_NO_WARNINGS
#define ydToMiter 0.9144
#include <stdio.h>

int pa03_08(void)
{
	int yard;
	double miter;	// float으로 받았을 때 정밀도가 떨어짐.
	printf("길이(yd)? ");
	scanf("%d", &yard);
	
	miter = yard * ydToMiter;

	printf("%d yd = %f m", yard, miter);
}