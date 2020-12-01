// 예제 12-2 : 파일 열기와 닫기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex12_02(void)
{
	FILE *fp = NULL;

	fp = fopen("a.txt", "r");	// "a.txt"가 없으므로 파일 열기 실패
	if (fp = NULL)
	{
		printf("파일 열기 실패\n");
		return 1;	// 프로그램을 종료한다.
	}
	printf("파일 열기 성공\n");
	fclose(fp);

	return 0;
}