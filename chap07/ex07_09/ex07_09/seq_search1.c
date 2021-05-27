#include <stdio.h>

int main(void)
{
    int data[] = { 78, 34, 52, 15, 63, 15, 25 };
    int size;
    int key, i;
    
    size = sizeof(data) / sizeof(data[0]);
    printf("arr = ");
    for (i = 0; i < size; i++)
        printf("%d ", data[i]);
    printf("\n");

    printf("찾을 값(키)? ");
    scanf("%d", &key);
    for (i = 0; i < size; i++)
        if (data[i] == key)  // 배열의 원소와 키 비교
            printf("찾은 원소의 인덱스: %d\n", i);
    return 0;
}