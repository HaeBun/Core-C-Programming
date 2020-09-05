/*
11. 각 학생별로 한 학기 성적은 중간고사 30점, 기말고사 30점, 팀프로젝트 30점, 출석 10점으로 계산된다.
학생이 모두 5명일 때, 각 학생별 총점을 구하고 중간고사, 기말고사, 팀프로젝트, 출석의 평균점을 구해서 출력하는 프로그램을 작성하시오.
성적을 저장하는 2차원 배열은 다음과 같이 초기화해서 사용한다.

실행결과
학 생   1번:   28    28    26     9 ==> 91
학 생   2번:   30    27    30    10 ==> 97
학 생   3번:   25    26    24     8 ==> 83
학 생   4번:   18    22    22     5 ==> 67
학 생   5번:   24    25    30    10 ==> 89
항목별 평균:   25.00 25.60 26.40  8.40

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_average(int arr[5][5], int number) {
	int i;
	arr[number][4] = 0;
	for (i = 0; i < 4; i++) {
		arr[number][4] += arr[number][i];
	}
	return arr[number][4];
}

void pa07_11() {
	int i, arr[5][5];
	float average[4][1];
	arr[0][0] = 28, arr[0][1] = 28, arr[0][2] = 26, arr[0][3] = 9;
	arr[1][0] = 30, arr[1][1] = 27, arr[1][2] = 30, arr[1][3] = 10;
	arr[2][0] = 25, arr[2][1] = 26, arr[2][2] = 24, arr[2][3] = 8;
	arr[3][0] = 18, arr[3][1] = 22, arr[3][2] = 22, arr[3][3] = 5;
	arr[4][0] = 24, arr[4][1] = 25, arr[4][2] = 30, arr[4][3] = 10;

	for (i = 0; i < 5; i++) {
		printf("학 생   %d번:   %2d    %2d    %2d    %2d ==> %2d\n", i+1, arr[i][0], arr[i][1], arr[i][2], arr[i][3], get_average(arr,i));
	}

	for (i = 0; i < 4; i++) {
		average[i][0] = (arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i] + arr[4][i]) / 5.0;
	}
	printf("항목별 평균:   %2.2f %2.2f %2.2f  %2.2f", average[0][0], average[1][0], average[2][0], average[3][0]);
}