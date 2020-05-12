/*
12. 원금과 연 이율(%)을 입력받아 1~10년 동안 연복리로 이자를 구해서 출력하는 프로그램을 작성하시오.
연복리를 계산하는 방법은 다음과 같다.

1년째 원리합계  원금 x (1+연이율)
2년째 원리합계  1년째 원리합계 x (1+연이율)
3년째 원리합계  2년째 원리합계 x (1+연이율)

실행결과
원금? [1000000]
연이율(%)? [2.5]
 1년째 이자: 25000.00, 원리합계: 1025000.00
 2년째 이자: 25625.00, 원리합계: 1050625.00
 3년째 이자: 26265.63, 원리합계: 1076890.63
 ...
10년째 여자: 31221.57, 원리합계: 1280084.54
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int pa05_12(void)
{
    float principal;
    float interest, interest_rate;

    printf("원금? ");
    scanf("%f", &principal);
    printf("연이율(%)? ");
    scanf("%f", &interest_rate);

    for (int i = 1; i <= 10; i++)
    {
        interest = principal / 100.0 * interest_rate;
        principal += interest;
        printf("%2d년째 이자: %.2f, 원리합계: %.2f\n",i , interest, principal);
    }
}