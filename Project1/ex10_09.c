// ���� 10-9 : ����ü�� ������ �����ϴ� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
	int x, y;	// ���� ��ǥ
} POINT;

void print_point(POINT pt);

int ex10_09(void)
{
	POINT arr[] = {
		{0, 0}, {10, 10}, {20, 20}, {30, 30}, {40, 40},
	};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;

	for (i = 0; i < sz; i++)
	{
		print_point(arr[i]);	// arr[i]�� pt�� �����ؼ� �����Ѵ�.
		printf(" ");
	}
	printf("\n");

	return 0;
}

void print_point(POINT pt)	// ���� ���� ����
{
	printf("(%d, %d)", pt.x, pt.y);
}