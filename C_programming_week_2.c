#include <stdio.h>
/*
int prime_num(int num) {
	int i;
	if (num < 2) return 0;
	for (i = 2; i * i <= num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}

int main(void) {

	int num, sum =0;

	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &num);

	if (num <= 2) {
		printf("2\n");
		return 0;
	}
	
	for (int i = 2; i < num; i++) {
		if (prime_num(i)) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}*/