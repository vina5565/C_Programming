#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

struct store {

	char item[10]; // 이름
	int price; // 가격
	int inventory; // 재고
	int sold; // 판매된 개수

};

void sale_mode(struct store list[], int size) {
	
	int cho;
	int total = 0;
	int input_money;

	while (1) {
		for (int i = 0; i < size; i++) {
			printf("%d) %s ", i + 1, list[i].item);
		}
		printf("%d) 계산\n", size + 1);
		printf(">>> ");
		scanf("%d", &cho);
		if (cho == size + 1) {
			break;	
		}
		if (cho >= 1 && cho <= size) {
			list[cho - 1].inventory -= 1;
			list[cho - 1].sold += 1;
			total += list[cho - 1].price;
		}
	}
	printf("판매 가격 총액 : %d\n", total);
	printf("받은 금액을 입력하시오.>>> ");
	scanf("%d", &input_money);

	printf("\n\n");
	printf("     ###   영수증    ###     \n");
	for (int i = 0; i < 30; i++) {
		printf("=");
	}
	printf("\n");
	for (int k = 0; k < size; k++) {
		if (list[k].sold > 0) {
			printf("  %-6s  %4dx%-2d     %5d\n",
				list[k].item,
				list[k].price,
				list[k].sold,
				list[k].price * list[k].sold);
		}
	}
	for (int i = 0; i < 30; i++) {
		printf("=");
	}
	printf("\n");
	printf("   총액            %10d\n", total);
	printf("   받은금액        %10d\n", input_money);
	for (int i = 0; i < 30; i++) {
		printf("=");
	}
	printf("\n");
	printf("   거스름돈        %10d\n", input_money - total);
	printf("\n\n");

	for (int i = 0; i < size; i++) {
		list[i].sold = 0;
	}
}
void buy_mode(struct store list[], int size) { // 재고량 보충

	int n;
	int cho;
	
	while (1) {
		for (int i = 0; i < size; i++) {
			printf("%d) %s ", i + 1, list[i].item);
		}
		printf("%d) 구매 종료\n", size + 1);
		printf(">>> ");
		scanf("%d", &cho);
		if (cho == size + 1) {
			break;
		}
		if (cho >= 1 && cho <= size) {
			printf("구매 수량을 입력하시오.>>> ");
			scanf("%d", &n);
			list[cho - 1].inventory += n;
			printf(" ## %s의 재고량이 %d으로 증가함.\n", list[cho - 1].item, list[cho - 1].inventory);
		}
		
	}

	
}
void view_mode(struct store list[], int size) { // 반복문으로 구조체에 접근해서 출력

	printf(" ###   상품명      재고량   ### \n");
	for (int i = 0; i < 30; i++) {
		printf("=");
	}
	printf("\n");
	for (int k = 0; k < size; k++) {
		printf("        %-6s      %5d\n", list[k].item, list[k].inventory);
	}
	for (int i = 0; i < 30; i++) {
		printf("=");
	}
	printf("\n");
}

int main() {

	struct store list[10];
	int i, k; // 10입력 예정
	int choice;


	printf("슈퍼에서 취급하는 상품의 개수를 입력하시오.>>> ");
	scanf("%d", &k);

	for (i = 0; i < k; i++) {
		printf("%d번째 상품의 이름, 가격, 재고량을 입력하시오.>>> ", i + 1);
		scanf("%s %d %d", list[i].item, &list[i].price, &list[i].inventory);
		list[i].sold = 0;
	}

	while (1) {
		printf("1) 판매 2) 구매 3) 조회 4) 종료\n");
		printf(">>> ");
		scanf("%d", &choice);
		if (choice == 1) {
			sale_mode(list, k);
		}
		if (choice == 2) {
			buy_mode(list, k);
		}
		if (choice == 3) {
			view_mode(list, k);
		}
		if (choice == 4) {
			break;
		}
	}

	return 0;
}