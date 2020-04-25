// char형과 unsigned char형의 오버플로우, 언더플로우

#include <stdio.h>

int ex03_04(void)
{
	char n = 128;
	unsigned char m = 256;
	char x = -129;
	unsigned char y = -1;

	printf("n = %d\n", n);
	printf("m = %d\n", m);
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}

/*
오버플로우와 언더플로우가 생각이 안날땐 문명 간디 폭력성을 생각해보자.

사회 정책을 변경할 때 특정 정책을 누를 시 폭력성이 -1 감소되는데,
간디의 경우는 초기 값이 0이여서 언더플로우 현상이 일어난다.
그렇다.

폭력성이 갑자기 255로 변한다. 재미있는 현상이다. ㅋㅋ루ㅋㅋ
*/