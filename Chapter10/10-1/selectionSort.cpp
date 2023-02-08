#include<stdio.h>

int main(void) {
    int data[10] = {10, 6, 7, 9, 3, 4, 2, 1, 5, 8};
    int temp;//랜덤한 위치라고 생각.
    printf("정렬 전 순서\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    //아래의 2중 for문이 선택 정렬 핵심.
    for (int i = 0; i < 9; i++) {  //10-1까지 마지막 대상은 비교할 필요가 없으니.
        for (int j = i + 1; j < 10; j++) {  //선정 위치 +1부터 마지막까지 비교.
            if (data[i] > data[j]) {  //오름차순이니 작은지 확인.
                temp = data[i];//swap.
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    printf("정렬 후 순서\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}