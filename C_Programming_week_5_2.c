/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 배열 방식: nums[2]에 합 저장
void calc_sum_array(int arr[], int size) {
    if (size >= 3) {
        arr[2] = arr[0] + arr[1];
    }
}

// 포인터 방식: *sum에 합 저장
void calc_sum_pointer(int* a, int* b, int* sum) {
    *sum = *a + *b;
}

int main(void)
{
    int choice;

    printf("방식을 선택하세요:\n");
    printf("1. 배열 방식\n");
    printf("2. 포인터 방식\n");
    printf("선택: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int nums[3];
        printf("\n[배열 방식] 정수 두 개를 입력하세요: ");
        scanf("%d %d", &nums[0], &nums[1]);

        calc_sum_array(nums, 3);

        printf("합: %d\n", nums[2]);

    }
    else if (choice == 2) {
        int x, y, result;
        printf("\n[포인터 방식] 정수 두 개를 입력하세요: ");
        scanf("%d %d", &x, &y);

        calc_sum_pointer(&x, &y, &result);

        printf("합: %d\n", result);

    }
    else {
        printf("잘못된 선택입니다. 1 또는 2를 입력하세요.\n");
    }

    return 0;
}
*/