/*
11. ���簢���� ���̿� �ѷ��� ���ϴ� get_rect_info �Լ��� �ۼ��Ͻÿ�.
���簢���� ����, ������ ���̸� �Է¹��� ���� get_rect_info �Լ��� �̿��ؼ� ���簢���� ���̿� �ѷ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

������
����? [10]
����? [20]
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void get_rect_info(int* width, int* height) {
	printf("����: %d, �ѷ� %d", (width[0] * height[0]), (width[0]*2)+(height[0]*2));
}
void main() {
	int width, height;

	printf("����? ");
	scanf("%d", &width);

	printf("����? ");
	scanf("%d", &height);

	get_rect_info(&width, &height);
}