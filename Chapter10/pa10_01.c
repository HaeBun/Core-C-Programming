/*
1. ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�.
���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�.
LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�н����带 ����� ���� �н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.

���� ���
ID? [ Guest ]
Password? [ Idontknow ]
ID: GUEST
PW: *********
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct login {
	char id[21];
	char pw[21];
};

void pa10_01() {
	struct login data;
	int i;
	printf("ID? ");
	scanf("%s", &data.id);
	printf("Password? ");
	scanf("%s", &data.pw);

	printf("ID : %s\n", data.id);
	printf("PW : ");
	for (i = 0; i < 20; i++) {
		if (data.pw[i] == '\0')
			break;
		printf("*");
	}
}