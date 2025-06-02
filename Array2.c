#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

// �迭 ��� �Լ�
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// �迭 �Է� �Լ�
void input_array(int arr[], int size) {
    printf("���� %d���� �Է��ϼ��� : ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// �ּҰ��� �ε��� ã��
int find_min_index(int arr[], int size) {
    int min_index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

// �ִ밪�� �ε��� ã��
int find_max_index(int arr[], int size) {
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

// �迭 �� �¹ٲٱ�
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    int arr[SIZE];

    input_array(arr, SIZE);

    printf("�Էµ� �迭: ");
    print_array(arr, SIZE);

    int min_index = find_min_index(arr, SIZE);
    int max_index = find_max_index(arr, SIZE);

    // �ּҰ��� �ִ밪 ��ȯ
    swap(arr, min_index, max_index);

    printf("�ּڰ��� �ִ��� ��ȯ�� �迭: ");
    print_array(arr, SIZE);

    return 0;
}
