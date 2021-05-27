#include <stdio.h>
#define SIZE 10
void copy_array(const int source[], int target[], int size);
void print_array(const int arr[], int size);

int main(void)
{
    int x[SIZE] = { 10, 20, 30, 40, 50 };
    int y[SIZE] = { 0 };

    printf("x = ");
    print_array(x, SIZE);
    copy_array(x, y, SIZE);
    printf("y = ");
    print_array(y, SIZE);
    return 0;
}

void copy_array(const int source[], int target[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        target[i] = source[i];
}

void print_array(const int arr[], int size)   // arr는 입력 매개변수
{
    int  i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}