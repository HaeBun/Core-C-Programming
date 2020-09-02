// copy_array 함수의 정의 및 호출
#include <stdio.h>
#define SIZE 7
void copy_array(int source[], int target[], int size);
void print_array(int arr[], int size);


int ex07_15(void)
{
	int x[SIZE] = { 10, 20, 30, 40, 50 };
	int y[SIZE] = { 0 };

	printf("x = ");
	print_array(x, SIZE);
	copy_array(x, y, 5);
	printf("y = ");
	print_array(y, SIZE);
	return 0;
}

void copy_array(int source[], int target[], int size)
{
	int i;
	for (i = 0; i < SIZE; i++)
		target[i] = source[i];			// 배열의 원소를 복사한다.
}

void print_array(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}