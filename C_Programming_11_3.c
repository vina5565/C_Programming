/*#include <stdio.h>

struct student {

	int number;
	char name[10];
	double grade;

};


int main() {

	struct student s = { 24, "kim", 4.0 };
	struct student* p;

	p = &s;

	printf("학번 = %d, 이름 = %s, 성적 = %.2f\n", s.number, s.name, s.grade);
	printf("학번 = %d, 이름 = %s, 성적 = %.2f\n", (*p).number, (*p).name, (*p).grade);
	return 0;
}*/