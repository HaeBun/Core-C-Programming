// 잘못된 인덱스를 사용하는 경우
#include <stdio.h>

int ex07_06(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;

	printf("arr = ");
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");

	printf("arr[5] = %d\n", arr[5]);	// 할당되지 않은 메모리를 읽어 온다. 결과는 쓰레기값.
//	arr[5] = 100;						// 할당되지 않은 메모리를 변경한다. (실행 에러)
										// 버퍼 'arr'(크기: 20바이트)이(가) 오버런됩니다. 4바이트가 오프셋 20부터 쓰입니다.
	return 0;
}