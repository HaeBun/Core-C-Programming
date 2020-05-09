// else if를 이용한 텍스트 기반의 메뉴 처리
#include <stdio.h>

int main(void)
{
	int menu;
	char filename[32] = "test.avi";

	printf("1.파일 열기\n");
	printf("2.재생\n");
	printf("3.재생 옵션\n");
	printf("선택: ");

	scanf("%d", &menu);
	if (menu == 1) {
		printf("재생한 파일 이름? ");
		scanf("%s", filename);
	}
	else if (menu == 2) {
		printf("%s를 재생합니다.\n");
	}
	else if (menu == 3) {
		printf("재생 옵션을 선택합니다.\n");
	}
	else {
		printf("잘못 선택하셨습니다.\n");
	}

	return 0;
}