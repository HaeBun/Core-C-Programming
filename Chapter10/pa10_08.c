/*
8. 커피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구조체를 정의하시오.
각 제품별로 제품명, 가격, 재고를 저장할 수 있어야 한다.
PRODUCT 구조체를 매개변수로 전달받아 제품 정보를 출력하는 print_product 함수를 정의하시오.
PRODUCT 구조체 변수를 선언한 다음 제품명, 가격, 재고를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
참고로 제품명은 빈칸 없는 한 단어로 입력한다.

실행결과
제품명? [ 아메리카노 ]
가격? [ 4000원 ]
재고? [ 10 ]
[아메리카노 4000원 재고:10]
*/

void print_product(struct PRODUCT product);

struct PRODUCT {
	char name[20];
	int price;
	int stock;
};

void pa10_08() {
	struct PRODUCT product;
	
	printf("제품명? ");
	scanf("%s", product.name);
	printf("가격? ");
	scanf("%d", &product.price);
	printf("재고? ");
	scanf("%d", &product.stock);

	print_product(product);
}

void print_product(struct PRODUCT product) {
	printf("[%s %d원 재고:%d]", product.name, product.price, product.stock);
}