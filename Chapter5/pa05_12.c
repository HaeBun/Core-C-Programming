/*
12. ���ݰ� �� ����(%)�� �Է¹޾� 1~10�� ���� �������� ���ڸ� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�������� ����ϴ� ����� ������ ����.

1��° �����հ�  ���� x (1+������)
2��° �����հ�  1��° �����հ� x (1+������)
3��° �����հ�  2��° �����հ� x (1+������)

������
����? [1000000]
������(%)? [2.5]
 1��° ����: 25000.00, �����հ�: 1025000.00
 2��° ����: 25625.00, �����հ�: 1050625.00
 3��° ����: 26265.63, �����հ�: 1076890.63
 ...
10��° ����: 31221.57, �����հ�: 1280084.54
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int pa05_12(void)
{
    float principal;
    float interest, interest_rate;

    printf("����? ");
    scanf("%f", &principal);
    printf("������(%)? ");
    scanf("%f", &interest_rate);

    for (int i = 1; i <= 10; i++)
    {
        interest = principal / 100.0 * interest_rate;
        principal += interest;
        printf("%2d��° ����: %.2f, �����հ�: %.2f\n",i , interest, principal);
    }
}