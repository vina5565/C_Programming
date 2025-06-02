#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define SIZE 11

int get_input() {

	int n;
	char c;

	while (1) {

		printf("�ֻ����� �� �� �����ðڽ��ϱ�? ");

		if (scanf("%d%c", &n, &c) != 2 || c != '\n' || n <= 0) {
			printf("�ùٸ� ������ �Է����ּ���.\n");

			while (getchar() != '\n');
		}
		else {
			return n;
		}
	}
}

int main() {

	int freq[SIZE] = { 0 }; // �迭 ��� �ʱ�ȭ
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
	printf("���� ��\n");
	printf("==========\n");

	for (int i = 0; i < SIZE; i++) {
		printf("%3d %3d \n", i + 2, freq[i]);
	}
	return 0;
}