/*
10. �װ��� ���� �� ������ �� �ҿ�ð��� �ð� ������ �Է¹޾Ƽ� ��ĥ �� �ð� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� �ҿ�ð��� �Ǽ��� �Է¹޴´�. ���� ��� �ҿ�ð��� 10.5�ð��̸� 10�ð� 30���̶�� �ǹ��̴�.

��
���� �ҿ�ð�(�ð�)? [31.5]
���� �ҿ�ð��� 1�� 7�ð� 30���Դϴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_10(void)
{
	float time;
	int day ,hour, minute, second;
	printf("���� �ҿ�ð�(�ð�)? ");
	scanf("%f", &time);

	second = time * 3600;

	day = second / 86400;
	second %= 86400;

	hour = second / 3600;
	second %= 3600;

	minute = second / 60;
	second %= 60;

	printf("���� �ҿ�ð��� %d�� %d�ð� %d��", day, hour, minute);
}