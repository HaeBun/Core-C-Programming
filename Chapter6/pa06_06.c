/*
6. 다음과 같이 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 choose_menu 함수를 작성하시오.
만일 잘못된 번호를 선택하면 올바른 번호를 선택할 떄까지 계속 메뉴를 출력하고 다시 선택받아야 한다.
즉, choose_menu 함수는 반드시 0~3사이의 값을 리턴해야 한다.
choose_menu의 리턴 값에 따라 어떤 메뉴가 선택되었는지 간단히 출력하는 프로그램을 작성하시오.

실행겨로가
[1.파일 열기  2.파일 저장  3.인쇄  0.종료] [1]
파일 열기를 수행합니다.
[1.파일 열기  2.파일 저장  3.인쇄  0.종료] [5]
[1.파일 열기  2.파일 저장  3.인쇄  0.종료] [0]
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu()
{
	int num;

	printf("[1.파일 열기  2.파일 저장  3.인쇄  0.종료] ");
	scanf("%d", &num);

	if (num >= 0 && num < 4)
		return num;
	else
		choose_menu();
}

int pa06_06(void)
{
	int choose;
	do
	{
		choose = choose_menu();

		if (choose == 1)
			printf("파일 열기를 수행합니다.\n");
		else if (choose == 2)
			printf("파일을 저장합니다.\n");
		else if (choose == 3)
			printf("파일을 인쇄합니다.\n");

		else
			break;
	} while (choose != 0); 
}