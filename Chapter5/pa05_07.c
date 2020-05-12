/*
7. ���� ����� �⺻ ��ݰ� �� ��뷮�� ���� ������� ���Ǵµ�, �����δ� �������� ����Ǿ� �ܰ躰�� ����Ǵ� �⺻ ��ݰ� �� ��뷮 ����� �޶�����.
������ ������ ���ǥ�� �����Ͽ� �� ��뷮�� �Է¹޾� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�⺻ ���(��/ȣ)
200kWh ���� ��� : 910
201~ 400kWh ��� : 1600
400kWh �ʰ� ��� : 7300

���·� ���(��/kWh)
ó�� 200kWh����  : 93.3
���� 200kWh����  : 187.9
400 kwh �ʰ�     : 280.6

������
�� ��뷮 (kWh)? [320]
���� ��� �հ�: 42808��
  - �⺻ ���:   1600��
  - ���·����: 41200��

��
���� ��� �� ��뷮�� 320kWh�� ���, �⺻ ����� 1,600���̰�, ���·� ����� 200 X 93.3 + 120 X 187.9
*/

#define _CRT_SECURE_NO_WARNINGS
#define basicPrice_LOW 910
#define basicPrice_MEDIUM 1600
#define basicPrice_HIGH 7300

#define usePrice_LOW 93.3
#define usePrice_MEDIUM 187.9
#define usePrice_HIGH 280.6

#include<stdio.h>
int pa05_07(void)
{
    int kWh, total, basicPrice, usePrice;
    printf("�� ��뷮 (kWh)? ");
    scanf("%d", &kWh);

    if (kWh <= 200) 
    {
        basicPrice = basicPrice_LOW;
        usePrice = (int)( kWh * usePrice_LOW );
        total = basicPrice + usePrice;
    }
    else if (kWh <= 400) 
    {
        kWh -= 200;
        basicPrice = basicPrice_MEDIUM;
        usePrice = (int)( (200 * usePrice_LOW) + (kWh * usePrice_MEDIUM) );
        total = basicPrice + usePrice;
    }
    else
    {
        kWh -= 400;
        basicPrice = basicPrice_HIGH;
        usePrice = (int)( (200 * usePrice_LOW) + (200 * usePrice_MEDIUM) + (kWh * usePrice_HIGH) );
        total = basicPrice + usePrice;
    }
    printf("���� ��� �հ�: %5d��\n", total);
    printf("  - �⺻ ���:  %5d��\n",basicPrice);
    printf("  - ���·����: %5d��", usePrice);
}
