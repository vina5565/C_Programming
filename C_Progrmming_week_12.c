#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

struct Question {
	char question[SIZE]; // ����
	char item1[SIZE]; // ����1
	char item2[SIZE]; // ����2
	char item3[SIZE]; // ����3
	char item4[SIZE]; // ����4
	int solution;
};

struct Question bank[100] = {
	{"�Ӻ���� ��ġ�� ���� ������ ���α׷��� ����?", "1.Python", "2. Java", "3. C", "4. Javascript", 3},
{"���� �ٸ� �ڷ����� ���� �� �ִ� �ڷ� ������?", "1. �迭", "2. ����", "3. ����ü", "4. ������", 3},
};

int main() {

	int select, i;
	for (i = 0; i < 2; i++) {
		printf("%s\n", bank[i].question); // ���� ���
		printf("%s ", bank[i].item1); // ���� 1 ~ 4 ���
		printf("%s ", bank[i].item2);
		printf("%s ", bank[i].item3);
		printf("%s ", bank[i].item4);
		scanf("%d", &select); // ����� �Է�
		if (select == bank[i].solution)
			printf("�¾ҽ��ϴ�.\n\n");
		else
			printf("Ʋ�Ƚ��ϴ�.\n\n");

	}

	return 0;
}