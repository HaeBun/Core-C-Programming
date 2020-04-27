/*
12. 네비게이션 앱에서 이동 거리와 예상 속력으로 도착 예정 시간을 구하는 프로그램을 작성하시오.
이동 거리는 km 단위로, 예상 속력은 km/h 단위로 입력받으며, 둘 다 실수로 입력받는다.
예상 소요 시간은 분 단위로 출력하여 정수로 출력한다.

실행결과
이동 거리(km)? [12]
예상 속력(km/h) [30]
도착까지 예상 소요 시간은 24분입니다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_12(void)
{
	float km, speed;
	int minute; 
	printf("이동 거리(km)? ");
	scanf("%f", &km);

	printf("예상 속력(km/h)? ");
	scanf("%f", &speed);

	minute = km / speed * 60;
	printf("도착까지 예상 소요 시간은 %d분입니다.", minute);
}