/*
14. 연, 월, 일을 인자로 전달받아 유효한 날짜인지 검사하는 check_date 함수를 작성하시오.
인자로 넘겨 받은 날짜가 유효한 날짜면 1을, 아니면 0을 리턴한다. 
이때, 앞에서 작성한 is_leap_year 함수와 get_days_of_month 함수를 이용해도 좋다.
check_date 함수를 입력해서 날짜를 입력받는 프로그램을 작성하시오.
만일 사용자가 잘못된 날짜를 입력하면 유효한 날짜를 입력할 때까지 계속해서 다시 입력받도록 처리한다.

실행결과
날짜 (연 월 일)? [ 2019 13 1 ]
잘못 입력하셨습니다. 유효한 날짜를 입력하세요.
날짜 (연 월 일)? [ 2019 1 40 ]
잘못 입력하셨습니다. 유효한 날짜를 입력하세요.
날짜 (연 월 일)? [ 2019 1 1 ]
입력한 날짜는 2019년 1월 1일입니다.

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_date(int year, int month, int day) {
	if (month > 12 || day > get_days_of_month(year)) {
		return 0;
	}
	else {
		return 1;
	}
}

void pa06_14() {
	int chk = 0;
	do {
		int year, month, day;
		printf("날짜 (연 월 일)? ");
		scanf("%d %d %d", &year, &month, &day);

		if (check_date(year, month, day) == 1) {
			printf("입력한 날짜는 %d년 %d월 %d일입니다.", year, month, day);
			chk++;
		}
		else {
			printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");
		}
	} while (chk == 0);
}