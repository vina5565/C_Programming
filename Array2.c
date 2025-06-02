#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

// 배열 출력 함수
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 배열 입력 함수
void input_array(int arr[], int size) {
    printf("정수 %d개를 입력하세요 : ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// 최소값의 인덱스 찾기
int find_min_index(int arr[], int size) {
    int min_index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

// 최대값의 인덱스 찾기
int find_max_index(int arr[], int size) {
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

// 배열 값 맞바꾸기
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    int arr[SIZE];

    input_array(arr, SIZE);

    printf("입력된 배열: ");
    print_array(arr, SIZE);

    int min_index = find_min_index(arr, SIZE);
    int max_index = find_max_index(arr, SIZE);

    // 최소값과 최대값 교환
    swap(arr, min_index, max_index);

    printf("최솟값과 최댓값을 교환한 배열: ");
    print_array(arr, SIZE);

    return 0;
}
