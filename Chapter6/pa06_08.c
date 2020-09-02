#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int get_red() {
	return 0;
}

int get_blue() {
	return 0;
}

int get_green() {
	return 0;
}



void main() {
	int a;
	scanf("%x", &a);

	printf("%d\n", ((-a-(256*256*256)) + 131072) );
	a >>= 8;
	printf("%06X", a);

	
}