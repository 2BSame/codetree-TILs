#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// 비교 함수 선언
int compare(const void *a, const void *b);

// 그룹의 최소 합과 최대 합을 찾는 함수
void find_min_max_sum(int *nums, int n, int *min_sum, int *max_sum) {
    *min_sum = INT_MAX;
    *max_sum = INT_MIN;

    for (int i = 0; i < n / 2; i++) {
        int group_sum = nums[i] + nums[n - 1 - i];
        *min_sum = group_sum < *min_sum ? group_sum : *min_sum;
        *max_sum = group_sum > *max_sum ? group_sum : *max_sum;
    }
}

// 최대 합을 최소화하는 함수
int minimize_max_group_sum(int N, int *elements) {
    int min_sum, max_sum;

    // 주어진 원소를 정렬
    qsort(elements, 2 * N, sizeof(int), compare);

    // 최소 합과 최대 합을 찾음
    find_min_max_sum(elements, 2 * N, &min_sum, &max_sum);

    return max_sum;
}

// 비교 함수 정의
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);

    int *elements = (int *)malloc(2 * N * sizeof(int));

    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &elements[i]);
    }

    int result = minimize_max_group_sum(N, elements);
    printf("%d\n", result);

    free(elements);

    return 0;
}