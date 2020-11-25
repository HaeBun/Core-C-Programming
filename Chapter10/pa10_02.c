/*
2. 1번 프로그램의 아이디와 패스워드를 항상 소문자로만 저장하도록 처리하려고 한다.
LOGIN 구조체를 매개변수로 전달받아 구조체에 저장된 아이디와 패스워드를 모두 소문자로 만드는 make_lower 함수와 
아이디와 패스워드를 출력하는 print_login 함수를 정의하시오.

실행결과
ID? [ Guest ]
Password? [ Idontknow ]
ID: guest
PW: *********
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

typedef struct login {
	char id[20];
	char pw[20];
} LOGIN;

void print_login(LOGIN* data);
void make_lower(LOGIN* data);

void pa10_02() {
	struct login data;
	printf("ID? ");
	scanf("%s", &data.id);
	printf("PW: ");
	scanf("%s", &data.pw);
	
	make_lower(&data);
	print_login(&data);
}

void make_lower(LOGIN* data) {
	int i;
	for (i = 0; i < 20; i++) {
		if (data->id[i] == '\0')
			break;
		data->id[i] = tolower(data->id[i]);
	}
	for (i = 0; i < 20; i++) {
		if (data->pw[i] == '\0')
			break;
		data->pw[i] = tolower(data->pw[i]);
	}
}

void print_login(LOGIN *data) {
	int i;
	printf("ID: %s\n", data->id);
	printf("PW: ");
	for (i = 0; i < 20; i++) {
		if (data->pw[i] == '\0')
			break;
		printf("*");
	}
}