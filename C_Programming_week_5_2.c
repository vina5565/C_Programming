/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �迭 ���: nums[2]�� �� ����
void calc_sum_array(int arr[], int size) {
    if (size >= 3) {
        arr[2] = arr[0] + arr[1];
    }
}

// ������ ���: *sum�� �� ����
void calc_sum_pointer(int* a, int* b, int* sum) {
    *sum = *a + *b;
}

int main(void)
{
    int choice;

    printf("����� �����ϼ���:\n");
    printf("1. �迭 ���\n");
    printf("2. ������ ���\n");
    printf("����: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int nums[3];
        printf("\n[�迭 ���] ���� �� ���� �Է��ϼ���: ");
        scanf("%d %d", &nums[0], &nums[1]);

        calc_sum_array(nums, 3);

        printf("��: %d\n", nums[2]);

    }
    else if (choice == 2) {
        int x, y, result;
        printf("\n[������ ���] ���� �� ���� �Է��ϼ���: ");
        scanf("%d %d", &x, &y);

        calc_sum_pointer(&x, &y, &result);

        printf("��: %d\n", result);

    }
    else {
        printf("�߸��� �����Դϴ�. 1 �Ǵ� 2�� �Է��ϼ���.\n");
    }

    return 0;
}
*/