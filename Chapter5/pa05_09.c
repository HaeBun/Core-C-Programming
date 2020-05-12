/*
9. 햄버거 가게의 계산서 프로그램을 작성하시오.
햄버거는 4000원, 콜라는 1500원, 감자튀김은 2000원이고, 세 가지를 세트로 주문하면 6500원이라고 하자.
햄버거, 콜라, 감자튀김의 수량을 입력받아서 최대한 세트로 구성하고 나머지는 단품으로 계산하도록 한다.
예를 들어 햄버거 2, 콜라 1, 감자튀김 3을 주문하면 계산은 세트 1, 햄버거 1, 감자튀김 2로 해야 한다.

실행결과
[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]
햄버거 개수? [5]
감자튀김 개수? [4]
콜라 개수? [3]
*/

#define hamburger_price 4000
#define french_fries_price 2000
#define coke_price 1500
#define combo_price 6500
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_09(void)
{
	int hamburger = 0, french_fries = 0, coke = 0, combo = 0;
	int total = 0;
	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");

	printf("햄버거 개수? ");
	scanf("%d", &hamburger);
	printf("감자튀김 개수? ");
	scanf("%d", &french_fries);
	printf("콜라 개수? ");
	scanf("%d", &coke);

	printf("\n");
	
	while (1)
	{
		if (hamburger > 0 && french_fries > 0 && coke > 0)
		{
			hamburger--;
			french_fries--;
			coke--;

			combo++;
		}
		else
		{
			total += combo * combo_price;
			total += hamburger * hamburger_price;
			total += french_fries * french_fries_price;
			total += coke * coke_price;
			break;
		}
	}

	printf("상품명      단가   수량   금액\n");
	printf("세트        %4d   %3d  %6d\n", combo_price, combo, combo * combo_price);
	printf("햄버거      %4d   %3d  %6d\n", hamburger_price, hamburger, hamburger * hamburger_price);
	printf("감자튀김    %4d   %3d  %6d\n", french_fries_price, french_fries, french_fries * french_fries_price);
	printf("------------------------------\n");
	printf("합계                   %7d", total);
}