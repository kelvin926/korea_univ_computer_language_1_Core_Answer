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

    printf("ã�� ��(Ű)? ");
    scanf("%d", &key);
    for (i = 0; i < size; i++)
        if (data[i] == key)  // �迭�� ���ҿ� Ű ��
            printf("ã�� ������ �ε���: %d\n", i);
    return 0;
}