/*
8. Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�.
�� ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�.
PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����Ͻÿ�.
PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.

������
��ǰ��? [ �Ƹ޸�ī�� ]
����? [ 4000�� ]
���? [ 10 ]
[�Ƹ޸�ī�� 4000�� ���:10]
*/

void print_product(struct PRODUCT product);

struct PRODUCT {
	char name[20];
	int price;
	int stock;
};

void pa10_08() {
	struct PRODUCT product;
	
	printf("��ǰ��? ");
	scanf("%s", product.name);
	printf("����? ");
	scanf("%d", &product.price);
	printf("���? ");
	scanf("%d", &product.stock);

	print_product(product);
}

void print_product(struct PRODUCT product) {
	printf("[%s %d�� ���:%d]", product.name, product.price, product.stock);
}