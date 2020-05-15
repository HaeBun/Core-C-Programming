/*
5. 인자로 전달받은 정수가 짝수인지 검사하는 is_even 함수와 홀수인지 검사하는 is_odd 함수를 작성하시오.
두 함수를 이용해서 0이 이력될 때까지 입력된 정수들에 대해서 짝수의 개수와 홀수의 개수를 구해서 출력하는 프로그램을 작성하시오.

실행결과
정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)
12 324 53 41 374 91 23 456 82 7 67 812 0
입력받은 정수 중 짝수는 6개, 홀수는 6개입니다.
*/

int is_even(int val, int even, int odd)
{
	if (val % 2 == 0)
		even++;
	else
		odd++;
}

int pa06_05(void)
{
	int val = 0;
	int even = 0, odd = 0;
	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");

	do
	{
		scanf("%d", &val);

		if (val == 0)
			break;

		is_even(val, even, odd);
	} while (val != 0);
	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", even, odd); 
}