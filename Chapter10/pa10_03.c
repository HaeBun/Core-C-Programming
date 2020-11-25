/*
3. LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
아이디를 입력받아서 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와 등록된 패스워드를 비교해서 같으면 "로그인 성공"이라고 출력한다.
LOGIN 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다.

실행결과
ID? [ guest ]
PW: idontknow
로그인 성공
ID? .
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef	struct login {
	char id[20];
	char pw[20];
}LOGIN;

void pa10_03() {
	struct login info[5] = { 
		{"qwer","1234"},
		{"asdf","5678"},
		{"qpwoeiru","zxcv"}, 
		{"guest","idontknow"}, 
		{"가나다","일이삼사"} };
	struct login data;
	int count = 0;
	int i;
	while(1){
		count = 0;
		printf("ID? ");
		scanf("%s", &data.id);

		if (strcmp(data.id,".") == 0) break;

		printf("PW: ");
		scanf("%s", &data.pw);

		for (i = 0; i < 5; i++) {
			if (count != 0) break;

			if (strcmp(info[i].id, data.id) == 0 && strcmp(info[i].pw, data.pw) == 0) {
				printf("로그인 성공\n");
				count = 1;
			}
			else {
				continue;
			}
		}
		if (count == 0)
			printf("로그인 실패\n");
	}
}