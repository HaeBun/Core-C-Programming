/*
14. 
고속도로의 과속 단속 방법 중 하나인 구간 단속은 구간 단속 시작 지점부터 종료 지점까지의 소요 시간과 거리를 이용해서 평균 주행 속력을 구하고 이 값으로 속도위반 여부를 판단하는 방식이다.
구간 단속 시작 지점에서 종료 지점까지의 소요 시간을 분으로 입력받고, 주행 거리를 km로 입력받아서 평균 속력이 100 km/h 이상이면 과속이라고 출력하는 프로그램을 작성하시오.

실행결과
구간 단속 소요 시간 (분)? [5]
구간 단속 주행 거리 (km)? [10]
평균 속력은 120.0 km/h입니다. 구간 단속 과속입니다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int pa05_14(void)
{
	int minute, km;
	float average;
	printf("구간 단속 소요 시간 (분)? ");
	scanf("%d", &minute);

	printf("구간 단속 주행 거리 (km)? ");
	scanf("%d", &km);

	average = (60 / minute) * km;

	printf("평균 속력은 %.1f kw/h입니다. ", average);

	if (average >= 100) {
		printf("구간 단속 과속입니다.");
	}
}