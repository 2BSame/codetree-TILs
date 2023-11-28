#include <stdio.h>
#include <stdlib.h>

// 중앙값을 출력하는 함수
void print_median(int *arr, int n) {
    int *sorted_arr = (int *)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        // 값을 정렬 배열에 삽입
        sorted_arr[i] = arr[i];

        // 정렬 배열을 오름차순으로 정렬
        for (int j = i; j > 0; j--) {
            if (sorted_arr[j] < sorted_arr[j - 1]) {
                // Swap
                int temp = sorted_arr[j];
                sorted_arr[j] = sorted_arr[j - 1];
                sorted_arr[j - 1] = temp;
            } else {
                break;
            }
        }

        // 중앙값 출력
        if (i % 2 == 0) {
            int median_index = i / 2;
            printf("%d ", sorted_arr[median_index]);
        }
    }

    free(sorted_arr);
}

int main() {
    int n;
    scanf("%d", &n);

    int *numbers = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    print_median(numbers, n);

    free(numbers);

    return 0;
}