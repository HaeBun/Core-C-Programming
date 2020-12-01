// 예제 12-3 : 파일 열기와 닫기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex12_03(void)
{
	FILE *fout = NULL;				// 출력용 파일
	FILE *fin = NULL;				// 입력용 파일

	fout = fopen("a.txt", "w");		// 출력용 파일을 연다
	if (fout = NULL)
	{
		printf("파일 열기 실패\n");
		return 1;					// 프로그램을 종료한다.
	}
	fclose(fout);					// 출력용 파일을 닫는다.

	fin = fopen("a.txt", "r");		// 입력용 파일을 연다.
	if (fin = NULL)
	{
		printf("파일 열기 실패\n");
	}
	printf("파일 열기 성공\n");
	fclose(fin);

	return 0;
}