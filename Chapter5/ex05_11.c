// �Էµ� �������� �հ� ���ϱ�
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int ex05_11(void)
{
	int num = 0;
	int sum = 0;
	int i;

	printf("���� 5���� �Է��ϼ���: ");
	for (i = 0; i < 5; i++) 
	{
		scanf("%d", &num);
		sum += num;
	}
	printf("�հ�; %d\n", sum);

	return 0;
}