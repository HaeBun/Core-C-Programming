/*
8. �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
�̶� ���̴�3.141592��� ����.

V = 4/3 PI * r^3 * h
V ���� ����

������
�������� ����? [5]
���� ����: 523.

��
C ���� �����̳� �������� ���ϴ� �����ڰ� ����. 
��� * �����ڸ� �̿��ؼ� ���� �� ���ϰų� ���̺귯�� �Լ��� pow �Լ��� �̿��Ѵ�.
pow �Լ��� ����Ϸ��� #include <math.h>�� �ʿ��ϴ�.
#include <math.h>
double x = pow(2,3);		// x�� 23�̹Ƿ� 8�� �ȴ�.
double y = pow(25, 0.5);	// y�� 250.5�̹Ƿ� 5�� �ȴ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include <stdio.h>
#include <math.h>

int pa04_08(void)
{
	int r;
	double volume;
	printf("�������� ����? ");
	scanf("%d", &r);

	volume = (4.0 / 3.0) * PI * pow(r, 3);

	printf("���� ����: %f", volume);
}