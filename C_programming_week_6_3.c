/*#include <stdio.h>
#include <ctype.h>

// ���ڿ� s���� �ܾ��� ������ ���� �Լ�
int count_word(char* s) {

	int i, wc = 0, waiting = 1;

	for (i = 0; s[i] != NULL; ++i)
		if (isalpha(s[i])) {
			if (waiting) {
				wc++;
				waiting = 0;
			}
		}
		else
			waiting = 1;
	return wc;
}

int main() {

	int wc = count_word("the C language book...");
	printf("�ܾ��� ���� : %d\n", wc);

	return 0;
}*/