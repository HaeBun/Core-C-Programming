/*
16. 컴퓨터 시스템에서 색상을 표현하는 방법 중에 RGB 표기법은 red, green, blue에 8비트씩을 사용해서 색상을 표현하므로 24비트 트루컬러라고 한다.
컴퓨터 시스템에서는 32비트 데이터의 최하위 바이트부터 red, green, blue의 순서로 색상 정보를 저장하고 최상위 바이트는 사용하지 않고 0으로 채운다.
0~255사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램을 작성하시오.
RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.

실행결과
red? [256] // 오버플로우로 인해 0으로 저장
green? [255]
blue? [128]
RGB 트루컬러: 80FF00

★
red, green, blue 값을 입력받을 때 0~255 범위의 값을 입력받아야 한다.
만약 255보다 큰 값을 입력하면 오버플로우로 처리하게 구현하시오.
즉, 예를 들어 256이 입력되면 0을 입력한 것으로 처리해아 한다.

★
RGB 색상을 출력하려면 printf 함수의 문자열로 "%06X"를 이용한다.
16진수로 6자리를 맞춰서 출력하고 값이 0이어도 0을 출력하라는 의미이다.
예를 들어 red, green, blue가 255, 0, 0인 경우 0000FF로 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pa04_16(void)
{
	unsigned int red, green, blue;
	printf("red? ");
	scanf("%d", &red);

	printf("green? ");
	scanf("%d", &green);

	printf("blue? ");
	scanf("%d", &blue);

	red %= 256;
	green %= 256;
	blue %= 256;

	printf("RGB 트루컬러: %06X", red*green*blue);
	return 0;
}