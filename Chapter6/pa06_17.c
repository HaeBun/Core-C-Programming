/*
17. ���ڷ� ���޵� ���� ��ǥ�� ��� ��и��� ������ �����ϴ� get_quadrant �Լ��� �ۼ��Ͻÿ�.
1~4��и��̸� 1~4�� �����ϰ�, �����̳� x�� �Ǵ� y�� ���� ���� 0�� �����ϵ��� �ۼ��Ͻÿ�.
get_quadrant �Լ��� �̿��ؼ� �Է¹��� ���� ��ǥ�� ��� ��и��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

������
���� ��ǥ (x, y)? 10 20
1��и��� ���Դϴ�.
���� ��ǥ (x, y)? -10 20
2��и��� ���Դϴ�.
���� ��ǥ (x, y)? 0 0
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_quadrant(int x, int y) {
	if (x > 0 && y > 0)
		return 1;
	else if (x < 0 && y > 0)
		return 2;
	else if (x < 0 && y < 0)
		return 3;
	else if (x > 0 && y < 0)
		return 4;
	else
		return 0;
}

void pa06_17() {
	int x, y;
	int quadrent;

	do {
		printf("���� ��ǥ (x,y)? ");
		scanf("%d %d", &x, &y);
		
		quadrent = get_quadrant(x, y);

		if (quadrent > 0) {
			printf("%d��и��� ���Դϴ�.\n", quadrent);
		}
		

	} while (quadrent != 0);
}
