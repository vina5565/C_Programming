/*#include <stdio.h>

const int Ax1 = 50, Ay1 = 50, Ax2 = 100, Ay2 = 100;

int main() {

	int i;
	for (i = 0; i < 3; i++) {

		int Bx1, By1, Bx2, By2;
		printf("������ ����(x1, y1), (x2, y2)�� �Է����ּ��� :");
		scanf_s("%d %d %d %d", &Bx1, &By1, &Bx2, &By2);

		//���ϴ� ��ǥ(Bx1,By1), ���� ��ǥ(Bx2,By2) Swap
		int temp;
		if (Bx1 > Bx2) { temp = Bx1; Bx1 = Bx2; Bx2 = temp; }
		if (By1 > By2) { temp = By1; By1 = By2; By2 = temp; }

		if (Ax1 <= Bx1 && Ay1 <= By1 && Bx2 <= Ax2 && By2 <= Ay2) {
			printf("�簢��A�� �簢�� B�� �����մϴ�.\n");
		}
		else if (Bx1 <= Ax1 && By1 <= Ay1 && Ax2 <= Bx2 && Ay2 <= By2) {
			printf("�簢��B�� �簢�� A�� �����մϴ�.\n");
		}
		else if ((Bx1 < Ax2 && Bx2 > Ax1) && (By1 < Ay2 && By2 > Ay1)) {
			printf("�簢�� A�� B�� �κ������� ��Ĩ�ϴ�.\n");

		}
		else printf("�簢�� A�� B�� ��ġ�� �ʽ��ϴ�.\n");
	}
}*/