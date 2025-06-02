/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

struct store {

	char item[SIZE]; // 이름
	int price; // 가격
	int inventory; // 재고

};

void buy_mode(struct store list[], int size) { // 재고량 보충

	int n;
	int cho;
	while (1) {
		for (int i = 0; i < size; i++) {
			printf("%d) %s ", i + 1, list[i].item);
		}
		printf("%d) 구매 종료", size + 1);
		printf(">>> ");
		scanf("%d", &cho);
		if (cho == size + 1) {
			break;
		}
		printf("구매 수량을 입력하시오.>>> ");
		scanf("%d", &n);
		printf(" ## %s의 재고량이 %d으로 증가함.", list[cho].item, n);
	}
	
}

int main() {

	struct store list[SIZE];
	int i, k; // 10입력 예정

	printf("슈퍼에서 취급하는 상품의 개수를 입력하시오.>>> ");
	scanf("%d", &k);

	for (i = 0; i < k; i++) {
		printf("%d번째 상품의 이름, 가격, 재고량을 입력하시오.>>> ", i + 1);
		scanf("%s %d %d", list[i].item, &list[i].price, &list[i].inventory);
	}

	for (int i = 0; i < k; i++) {
		printf("%d) %s", i + 1, list[i].item);
	}
	printf("\n\n");

	buy_mode(list, k);

	return 0;

}*/