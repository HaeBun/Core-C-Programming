/*
15. 아르바이트비를 계산하는 앱을 작성하시오.
시급과 일일 근무 시간, 한달 근무 일수, 세금 적용 여부를 입력받아 예상 월급이 얼마인지 출력하시오.
세금 적용 여부는 미적용, 4대보험 공제 8.41%, 소득세 공제 3.3% 중 하나를 선택할 수 있게 한다.

실행결과
시간당 급여? [8000]
일일 근무 시간? [4]
한달 근무 일수? [20]
세금 적용 여부 0:미적용, 1:4대보험공제(8.41%), 2:소득세공제(3.3%)? [2]
예상 월급여: 618880원

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_15(void)
{
	int pay, hour, days;
	int select, total;

	printf("시간당 급여? ");
	scanf("%d", &pay);
	printf("일일 근무 시간? ");
	scanf("%d", &hour);
	printf("한달 근무 일수? ");
	scanf("%d", &days);

	printf("세금 적용 여부 0:미적용, 1:4대보험공제(8.41%%), 2:소득세공제(3.3%%)? ");
	scanf("%d", &select);
	switch (select)
	{
	case 0:
		total = pay * hour * days;
		break;

	case 1:
		total = (pay * hour * days);
		total -= (int)(total / 100 * 8.41);
		break;
	case 2:
		total = (pay * hour * days);
		total -= (int)(total / 100 * 3.3);
		break;
	}

	printf("예상 월급여: %d원", total);
}