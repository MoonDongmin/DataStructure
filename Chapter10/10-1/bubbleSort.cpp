# include <stdio.h>
# define MAX_SIZE 5

// 버블 정렬
void bubble_sort(int list[], int n) {
    int i, j, temp;

    for (i = n - 1; i > 0; i--) {
        // 0 ~ (i-1)까지 반복
        for (j = 0; j < i; j++) {
            // j번째와 j+1번째의 요소가 크기 순이 아니면 교환
            if (list[j] > list[j + 1]) {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

void main() {
    int i;
    int n = MAX_SIZE;
    int list[] = { 7, 4, 5, 1, 3 };
    printf("정렬하기 전: ");
    for (i = 0; i < n; i++) {
        printf("[%d] ", list[i]);
    }

    printf("\n");
    printf("\n");
    // 버블 정렬 수행
    bubble_sort(list, n);

    printf("정렬한 후: ");
    // 정렬 결과 출력
    for (i = 0; i < n; i++) {
        printf("[%d] ", list[i]);
    }
}
