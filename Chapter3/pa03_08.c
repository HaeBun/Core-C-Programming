/*
8. ���̸� �ߵ�(yd)�� �Է¹޾� ����(m)�� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
1yd�� 0.9144m�� �ش��Ѵ�.

������
����(yd)? [100]
100 yd = 91.440000 m

*/

#define _CRT_SECURE_NO_WARNINGS
#define ydToMiter 0.9144
#include <stdio.h>

int pa03_08(void)
{
	int yard;
	double miter;	// float���� �޾��� �� ���е��� ������.
	printf("����(yd)? ");
	scanf("%d", &yard);
	
	miter = yard * ydToMiter;

	printf("%d yd = %f m", yard, miter);
}