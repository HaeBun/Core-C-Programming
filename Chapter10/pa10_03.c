/*
3. LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
���̵� �Է¹޾Ƽ� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������ ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�.
LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.

������
ID? [ guest ]
PW: idontknow
�α��� ����
ID? .
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef	struct login {
	char id[20];
	char pw[20];
}LOGIN;

void pa10_03() {
	struct login info[5] = { 
		{"qwer","1234"},
		{"asdf","5678"},
		{"qpwoeiru","zxcv"}, 
		{"guest","idontknow"}, 
		{"������","���̻��"} };
	struct login data;
	int count = 0;
	int i;
	while(1){
		count = 0;
		printf("ID? ");
		scanf("%s", &data.id);

		if (strcmp(data.id,".") == 0) break;

		printf("PW: ");
		scanf("%s", &data.pw);

		for (i = 0; i < 5; i++) {
			if (count != 0) break;

			if (strcmp(info[i].id, data.id) == 0 && strcmp(info[i].pw, data.pw) == 0) {
				printf("�α��� ����\n");
				count = 1;
			}
			else {
				continue;
			}
		}
		if (count == 0)
			printf("�α��� ����\n");
	}
}