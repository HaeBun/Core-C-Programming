// ���� 10-4 : ����ü ������ ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct contact		// ����ó
{
	char name[20];	// �̸�
	char phone[20]; // ��ȭ��ȣ (01012345678 ������ ���ڿ��� ����)
	int ringtone;	// �� �Ҹ�(0~9 ����)
};

int ex10_04(void)
{
	struct contact ct1 = { "������", "01012345678", 1 };
	struct contact ct2 = ct1;

	if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0
		&& ct1.ringtone == ct2.ringtone)
		printf("ct1�� ct2�� ���� �����ϴ�.\n");
	else
		printf("ct1�� ct2�� ���� ���� �ʽ��ϴ�.");
	return 0;
}