/*
3. 거스름돈의 금액을 입력받아 오만원, 만원, 천원, 백원, 십원짜리가 각각 몇 개 필요한지 구해서 출력하시오.
십원 미만 단위는 절사한다.

실행결과
거스름돈? [68234]
거스름돈 (10원미만 절사): 68230
  50000원   1장
  10000원   1장
   5000원   1장
   1000원   3장
    100원   2개
     10원   3개
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa05_03(void)
{
    int money;
    printf("거스름돈? ");
    scanf("%d", &money);
    
    money -= money % 10;
    printf("거스름돈 (10원미만 절사): %d\n", money);

    if ((money / 50000) != 0) 
    {
        printf(" %5d원 %2d장\n", 50000, money / 50000);
        money %= 50000;
    }

    if ((money / 10000) != 0)
    {
        printf(" %5d원 %2d장\n", 10000, money / 10000);
        money %= 10000;
    }

    if ((money / 5000) != 0)
    {
        printf(" %5d원 %2d장\n", 5000, money / 5000);
        money %= 5000;
    }

    if ((money / 1000) != 0)
    {
        printf(" %5d원 %2d장\n", 1000, money / 1000);
        money %= 1000;
    }

    if ((money / 100) != 0)
    {
        printf(" %5d원 %2d개\n", 100, money / 100);
        money %= 100;
    }

    if ((money / 10) != 0)
    {
        printf(" %5d원 %2d개\n", 10, money / 10);
        money %= 10;
    }
}
/*
배열은 Chapter 7에서 배운다. 코드 정말 길다. 배열쓰자.
*/