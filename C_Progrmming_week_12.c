#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

struct Question {
	char question[SIZE]; // 질문
	char item1[SIZE]; // 보기1
	char item2[SIZE]; // 보기2
	char item3[SIZE]; // 보기3
	char item4[SIZE]; // 보기4
	int solution;
};

struct Question bank[100] = {
	{"임베디드 장치에 가장 적합한 프로그래밍 언어는?", "1.Python", "2. Java", "3. C", "4. Javascript", 3},
{"서로 다른 자료형을 모을 수 있는 자료 구조는?", "1. 배열", "2. 변수", "3. 구조체", "4. 포인터", 3},
};

int main() {

	int select, i;
	for (i = 0; i < 2; i++) {
		printf("%s\n", bank[i].question); // 문제 출력
		printf("%s ", bank[i].item1); // 보기 1 ~ 4 출력
		printf("%s ", bank[i].item2);
		printf("%s ", bank[i].item3);
		printf("%s ", bank[i].item4);
		scanf("%d", &select); // 사용자 입력
		if (select == bank[i].solution)
			printf("맞았습니다.\n\n");
		else
			printf("틀렸습니다.\n\n");

	}

	return 0;
}