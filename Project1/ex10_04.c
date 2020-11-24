// 예제 10-4 : 구조체 변수의 비교
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct contact		// 연락처
{
	char name[20];	// 이름
	char phone[20]; // 전화번호 (01012345678 형식의 문자열로 저장)
	int ringtone;	// 벨 소리(0~9 선택)
};

int ex10_04(void)
{
	struct contact ct1 = { "전정국", "01012345678", 1 };
	struct contact ct2 = ct1;

	if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0
		&& ct1.ringtone == ct2.ringtone)
		printf("ct1과 ct2의 값이 같습니다.\n");
	else
		printf("ct1과 ct2의 값이 같지 않습니다.");
	return 0;
}