/*
9. �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�.
�ܹ��Ŵ� 4000��, �ݶ�� 1500��, ����Ƣ���� 2000���̰�, �� ������ ��Ʈ�� �ֹ��ϸ� 6500���̶�� ����.
�ܹ���, �ݶ�, ����Ƣ���� ������ �Է¹޾Ƽ� �ִ��� ��Ʈ�� �����ϰ� �������� ��ǰ���� ����ϵ��� �Ѵ�.
���� ��� �ܹ��� 2, �ݶ� 1, ����Ƣ�� 3�� �ֹ��ϸ� ����� ��Ʈ 1, �ܹ��� 1, ����Ƣ�� 2�� �ؾ� �Ѵ�.

������
[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]
�ܹ��� ����? [5]
����Ƣ�� ����? [4]
�ݶ� ����? [3]
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
	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");

	printf("�ܹ��� ����? ");
	scanf("%d", &hamburger);
	printf("����Ƣ�� ����? ");
	scanf("%d", &french_fries);
	printf("�ݶ� ����? ");
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

	printf("��ǰ��      �ܰ�   ����   �ݾ�\n");
	printf("��Ʈ        %4d   %3d  %6d\n", combo_price, combo, combo * combo_price);
	printf("�ܹ���      %4d   %3d  %6d\n", hamburger_price, hamburger, hamburger * hamburger_price);
	printf("����Ƣ��    %4d   %3d  %6d\n", french_fries_price, french_fries, french_fries * french_fries_price);
	printf("------------------------------\n");
	printf("�հ�                   %7d", total);
}