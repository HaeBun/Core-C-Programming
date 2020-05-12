/*
6. 면적을 입력받아 평은 제곱미터로, 제곱미터는 평으로 변환하는 프로그램을 작성하시오.
"50 p"또는 "50 m"처럼 면적을 입력받을 때, 평인지 제곱미터인지 구분할 수 있는 문자를 함께 입력받는다.
함께 입력된 문자가 'p'면 평이므로 제곱미터를 출력하고, 입력된 문자가 'm'면 제곱미터이므로 평을 구해서 출력한다.
1m^2는 0.3025평에 해당하고, 1평은 3.305785m^2에 해당한다.

실행결과
넓이? [160 m]
160.00 제곱미터 == 48.40 평
*/

#define _CRT_SECURE_NO_WARNINGS
#define M 0.3025
#define P 3.305785

#include <stdio.h>
int pa05_06(void)
{
	float area;
	char ch;
	printf("넓이? ");
	scanf("%f %c", &area, &ch);

	if (ch == 'p')
	{
		printf("%.2f 평 == %.2f 제곱미터", area, area * P);
	}
	
	if (ch == 'm')
	{
		printf("%.2f 제곱미터 == %.2f 평", area, area * M);
	}
}