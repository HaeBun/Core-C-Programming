/*
15. 정수를 몇 번째 자리에서 반올림할지 지정하는 round_pos 함수를 작성하시오.
예를 들어 round_pos(12345, 1);은 12350을 리턴하고 round_pos(12345, 2);는 12300을 리턴해야 한다.
1357을 1~3번째 자리에서 반올림한 결과를 각각 구해서 출력하는 프로그램을 작성하시오.

실행결과
1번째 자리에서 반올림한 결과: 1360
2번째 자리에서 반올림한 결과: 1400
3번째 자리에서 반올림한 결과: 1000
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int round_pos(int value, int digit) {
	if (digit / 2 < value % digit)
		value = value - (value % digit) + digit;
	else
		value = value - (value % digit);
	return value;
}

void pa06_15() {
	int i, value = 1357;
	
	for (i = 1; value >= pow(10, i); i++) {
		printf("%d번째 자리에서 반올림한 결과: %d\n", i, round_pos(value, pow(10, i)));
	}
}
