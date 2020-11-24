// 예제 10-5 : 구조체 배열
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct contact		// 연락처
{
	char name[20];
	char phone[20];
	int ringtone;
} CONTACT;

int ex10_05(void)
{
	CONTACT arr[] = {	// 배열의 크기를 생략할 수 있다.
		{"김석진", "01011112222", 0},
		{"전정국", "01012345678", 1},
		{"박지민", "01077778888", 2}
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("이름   전화번호    벨\n");
	for (i = 0; i < size; i++)
	{
		printf("%6s %11s %d\n", arr[i].name, arr[i].phone, arr[i].ringtone);
	}

	return 0;
}