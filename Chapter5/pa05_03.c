/*
3. �Ž������� �ݾ��� �Է¹޾� ������, ����, õ��, ���, �ʿ�¥���� ���� �� �� �ʿ����� ���ؼ� ����Ͻÿ�.
�ʿ� �̸� ������ �����Ѵ�.

������
�Ž�����? [68234]
�Ž����� (10���̸� ����): 68230
  50000��   1��
  10000��   1��
   5000��   1��
   1000��   3��
    100��   2��
     10��   3��
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa05_03(void)
{
    int money;
    printf("�Ž�����? ");
    scanf("%d", &money);
    
    money -= money % 10;
    printf("�Ž����� (10���̸� ����): %d\n", money);

    if ((money / 50000) != 0) 
    {
        printf(" %5d�� %2d��\n", 50000, money / 50000);
        money %= 50000;
    }

    if ((money / 10000) != 0)
    {
        printf(" %5d�� %2d��\n", 10000, money / 10000);
        money %= 10000;
    }

    if ((money / 5000) != 0)
    {
        printf(" %5d�� %2d��\n", 5000, money / 5000);
        money %= 5000;
    }

    if ((money / 1000) != 0)
    {
        printf(" %5d�� %2d��\n", 1000, money / 1000);
        money %= 1000;
    }

    if ((money / 100) != 0)
    {
        printf(" %5d�� %2d��\n", 100, money / 100);
        money %= 100;
    }

    if ((money / 10) != 0)
    {
        printf(" %5d�� %2d��\n", 10, money / 10);
        money %= 10;
    }
}
/*
�迭�� Chapter 7���� ����. �ڵ� ���� ���. �迭����.
*/