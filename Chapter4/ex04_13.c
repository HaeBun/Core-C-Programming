// �Խ��� ���α׷��� ������ �� ���ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex04_13(void)
{
	int items = 0;	// ��ü �׸��
	int pages = 0, left = 0;
	int items_per_page = 0;	// �� ������ �� �׸� ��

	printf("�׸��? ");
	scanf("%d", &items);
	
	printf("�� ������ �� �׸��? ");
	scanf("%d", &items_per_page);

	pages = items / items_per_page;		// ������ ��
	left = items % items_per_page;		// ���� �׸� ��
	pages = left > 0 ? pages + 1 : pages;
	printf("�ʿ��� �� ��������: %d\n", pages);
	printf("������ �������� �׸��: %d\n",
		left > 0 ? left : items_per_page);

	return 0;
}