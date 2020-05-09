// 중첩된 if의 사용 예
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int ex05_04(void)
{
	int age, fee;

	printf("나이? ");
	scanf("%d", &age);

	if (age >= 8) {
		if (age >= 65) {
			fee = 5000;
		}
		else {
			fee = 10000;
		}
	}
	else {
		fee = 0;
	}
	printf("입장료: %d원\n", fee);
	
	return 0;
}