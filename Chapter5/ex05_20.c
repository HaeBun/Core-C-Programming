// ���� �޴��� ���� �޴� ó�� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ex05_20(void)
{
	int menu;
	char filename[32] = "test.avi";

	while (1)
	{
		printf("1.���� ����\n");
		printf("2.���\n");
		printf("3.��� �ɼ�\n");
		printf("����: ");

		scanf("%d", &menu);
		if (menu == 0)			// menu�� �Է¹��� ���� ���� Ż�� ������ �˻��Ѵ�.
			break;


		switch (menu) {
		case 1:
			printf("����� ���� �̸�? ");
			scanf("%s", filename);
			break;
		case 2:
			printf("%s�� ����մϴ�.\n", filename);
			break;
		case 3:
			printf("��� �ɼ��� �����մϴ�.\n");
			break;
		default:
			printf("�߸� �����ϼ̽��ϴ�.\n");
			break;
		}
	}

	return 0;
}