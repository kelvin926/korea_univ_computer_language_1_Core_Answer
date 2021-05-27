#include <stdio.h>

#define SIZE 5

int main(void)
{
    int data[SIZE] = { 7, 3, 9, 5, 1 };
    int i, j;
    int index, temp;

    for (i = 0; i < SIZE - 1; i++)  // 0~(i-1)까지는 정렬된 상태이다.
    {
        index = i;   // 아직 정렬되지 않은 원소 중 가장 작은 원소의 인덱스
        for (j = i + 1; j < SIZE; j++) {
            // data[i]~data[SIZE-1]중에서 가장 작은 원소의 인덱스를 index에 저장한다.
            if (data[index] > data[j])
                index = j;
        }
        // i번째 원소를 index에 있는 원소와 맞바꾼다.
        if (i != index) {
            temp = data[i];
            data[i] = data[index];
            data[index] = temp;
        }   // i번째 원소가 i번째로 작은 값이 된다.
    }
    printf("정렬 후: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", data[i]);
    printf("\n");
    return 0;
}