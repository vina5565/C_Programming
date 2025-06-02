#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define SIZE 11

int get_input() {

	int n;
	char c;

	while (1) {

		printf("주사위를 몇 번 던지시겠습니까? ");

		if (scanf("%d%c", &n, &c) != 2 || c != '\n' || n <= 0) {
			printf("올바른 정수를 입력해주세요.\n");

			while (getchar() != '\n');
		}
		else {
			return n;
		}
	}
}

int main() {

	int freq[SIZE] = { 0 }; // 배열 요소 초기화
	int i;
	int n = get_input();

	srand(time(NULL));

	for (i = 0; i < n; i++) {
		int die1 = rand() % 6 + 1;
		int die2 = rand() % 6 + 1;
		int sum = die1 + die2;

		++freq[sum - 2];
	}

	printf("==========\n");
	printf("숫자 빈도\n");
	printf("==========\n");

	for (int i = 0; i < SIZE; i++) {
		printf("%3d %3d \n", i + 2, freq[i]);
	}
	return 0;
}