/*
15. �Ƹ�����Ʈ�� ����ϴ� ���� �ۼ��Ͻÿ�.
�ñް� ���� �ٹ� �ð�, �Ѵ� �ٹ� �ϼ�, ���� ���� ���θ� �Է¹޾� ���� ������ ������ ����Ͻÿ�.
���� ���� ���δ� ������, 4�뺸�� ���� 8.41%, �ҵ漼 ���� 3.3% �� �ϳ��� ������ �� �ְ� �Ѵ�.

������
�ð��� �޿�? [8000]
���� �ٹ� �ð�? [4]
�Ѵ� �ٹ� �ϼ�? [20]
���� ���� ���� 0:������, 1:4�뺸�����(8.41%), 2:�ҵ漼����(3.3%)? [2]
���� ���޿�: 618880��

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pa05_15(void)
{
	int pay, hour, days;
	int select, total;

	printf("�ð��� �޿�? ");
	scanf("%d", &pay);
	printf("���� �ٹ� �ð�? ");
	scanf("%d", &hour);
	printf("�Ѵ� �ٹ� �ϼ�? ");
	scanf("%d", &days);

	printf("���� ���� ���� 0:������, 1:4�뺸�����(8.41%%), 2:�ҵ漼����(3.3%%)? ");
	scanf("%d", &select);
	switch (select)
	{
	case 0:
		total = pay * hour * days;
		break;

	case 1:
		total = (pay * hour * days);
		total -= (int)(total / 100 * 8.41);
		break;
	case 2:
		total = (pay * hour * days);
		total -= (int)(total / 100 * 3.3);
		break;
	}

	printf("���� ���޿�: %d��", total);
}