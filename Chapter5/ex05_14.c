// �Էµ� �������� �հ� ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex05_14(void)
{
	int num = 0;
	int sum = 0;
	int i = 0;

	printf("���� 5���� �Է��ϼ���: ");
	while (i < 5)
	{
		// �ݺ��� ����
		scanf("%d", &num);
		sum += num;
		i++;
	}
	printf("�հ�: %d\n", sum);

	return 0;
}