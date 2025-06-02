#include <stdio.h>

// �ִ밪 �Ǻ�
int largest_num(int x, int y, int z) {
	if (x >= y && x >= z)
		return x;
	else if (y >= x && y >= z)
		return y;
	else
		return z;
}

// �ﰢ�� �Ǻ�
int can_triangle(int a, int b, int c) {
	int largest = largest_num(a, b, c);
	int sumoftwo = a + b + c - largest;

	return largest < sumoftwo;
}

int main(void) {

	for (int i = 0; i < 3; i++) {

		int one, two, three;

		printf("���� ���� 3���� �Է��ϼ��� : ");
		scanf_s("%d %d %d", &one, &two, &three);

		if (!can_triangle(one, two, three)) {
			printf("�ﰢ���� �� �� �����ϴ�.\n");
			continue;
		}

		// �ִ밪�� ������ �� ���� ����
		int largest = largest_num(one, two, three);
		int side1, side2;

		if (largest == one) {
			side1 = two;
			side2 = three;
		}
		else if (largest == two) {
			side1 = one;
			side2 = three;
		}
		else {
			side1 = one;
			side2 = two;
		}

		if (one == two && two == three) {
			printf("���ﰢ���Դϴ�.\n");
		}
		else if (largest * largest == side1 * side1 + side2 * side2) {
			printf("�����ﰢ���Դϴ�.\n");
		}
		else if (one == two || two == three || one == three) {
			printf("�̵�ﰢ���Դϴ�.\n");
		}
		else {
			printf("�Ϲ� �ﰢ���Դϴ�.\n");
		}

	}

	return 0;
}