/*
2. Visual Studio를 이용해서 다음과 같이 C 프로그램을 작성하고, 빌드 후 실행하시오.

#include <stdio.h>

int main(void)
{
	printf("FirstApp 프로그램\n");
	printf("작성자: 천정아\n");
	printf("버전: 1.0\n");

	return 0;
}

실행결과
10 + 20 = 30
56 - 32 = 24
11 * 31 = 341
72 / 12 = 6

*/

#include <stdio.h>

int pa01_02(void)
{
	printf("10 + 20 = %d\n", 10 + 20);
	printf("56 - 32 = %d\n", 56 - 32);
	printf("11 * 31 = %d\n", 11 * 31);
	printf("72 / 12 = %d\n", 72 / 12);

	return 0;
}
