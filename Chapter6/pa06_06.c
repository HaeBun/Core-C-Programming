/*
6. ������ ���� �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� choose_menu �Լ��� �ۼ��Ͻÿ�.
���� �߸��� ��ȣ�� �����ϸ� �ùٸ� ��ȣ�� ������ ������ ��� �޴��� ����ϰ� �ٽ� ���ù޾ƾ� �Ѵ�.
��, choose_menu �Լ��� �ݵ�� 0~3������ ���� �����ؾ� �Ѵ�.
choose_menu�� ���� ���� ���� � �޴��� ���õǾ����� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

����ܷΰ�
[1.���� ����  2.���� ����  3.�μ�  0.����] [1]
���� ���⸦ �����մϴ�.
[1.���� ����  2.���� ����  3.�μ�  0.����] [5]
[1.���� ����  2.���� ����  3.�μ�  0.����] [0]
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu()
{
	int num;

	printf("[1.���� ����  2.���� ����  3.�μ�  0.����] ");
	scanf("%d", &num);

	if (num >= 0 && num < 4)
		return num;
	else
		choose_menu();
}

int pa06_06(void)
{
	int choose;
	do
	{
		choose = choose_menu();

		if (choose == 1)
			printf("���� ���⸦ �����մϴ�.\n");
		else if (choose == 2)
			printf("������ �����մϴ�.\n");
		else if (choose == 3)
			printf("������ �μ��մϴ�.\n");

		else
			break;
	} while (choose != 0); 
}