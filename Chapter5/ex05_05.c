// else if의 사용 예
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex05_05(void)
{
	int age, fee;

	printf("나이? ");
	scanf("%d", &age);

	if (age < 8) {
		fee = 0;
	}
	else if (age >= 65) { // age >= 8 && age >= 65라는 의미
		fee = 5000;
	}
	else {
		fee = 10000;
	}
	printf("입장료: %d원\n", fee);

	return 0;
}