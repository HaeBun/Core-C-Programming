/*
2. 1�� ���α׷��� ���̵�� �н����带 �׻� �ҹ��ڷθ� �����ϵ��� ó���Ϸ��� �Ѵ�.
LOGIN ����ü�� �Ű������� ���޹޾� ����ü�� ����� ���̵�� �н����带 ��� �ҹ��ڷ� ����� make_lower �Լ��� 
���̵�� �н����带 ����ϴ� print_login �Լ��� �����Ͻÿ�.

������
ID? [ Guest ]
Password? [ Idontknow ]
ID: guest
PW: *********
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

typedef struct login {
	char id[20];
	char pw[20];
} LOGIN;

void print_login(LOGIN* data);
void make_lower(LOGIN* data);

void pa10_02() {
	struct login data;
	printf("ID? ");
	scanf("%s", &data.id);
	printf("PW: ");
	scanf("%s", &data.pw);
	
	make_lower(&data);
	print_login(&data);
}

void make_lower(LOGIN* data) {
	int i;
	for (i = 0; i < 20; i++) {
		if (data->id[i] == '\0')
			break;
		data->id[i] = tolower(data->id[i]);
	}
	for (i = 0; i < 20; i++) {
		if (data->pw[i] == '\0')
			break;
		data->pw[i] = tolower(data->pw[i]);
	}
}

void print_login(LOGIN *data) {
	int i;
	printf("ID: %s\n", data->id);
	printf("PW: ");
	for (i = 0; i < 20; i++) {
		if (data->pw[i] == '\0')
			break;
		printf("*");
	}
}