// switch를 이용한 텍스트 기반의 메뉴 처리
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ex05_08(void)
{
	int menu;
	char filename[32] = "test.avi";

	printf("1.파일 열기\n");
	printf("2.재생\n");
	printf("3.재생 옵션\n");
	printf("선택: ");

	scanf("%d", &menu);
	switch (menu) {
	case 1:
		printf("재생할 파일 이름? ");
		scanf("%s", filename);
		break;

	case 2:
		printf("%s를 재생합니다.\n", filename);
		break;
	case 3:
		printf("재생 옵션을 선택합니다.\n");
		break;

	default:
		printf("잘못 선택하셨습니다.\n");
		break;
	}

	return 0;
}