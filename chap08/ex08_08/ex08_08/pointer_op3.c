#include <stdio.h>

int main(void)
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *p = &arr[0];   // arr[0]의 주소를 p에 저장한다.
    int i;

    for (i = 0; i < 5; i++, p++)    // p는 &arr[0]~&arr[4]의 값이 된다.
    {
        printf("p= %p, ", p);       // p가 가리키는 원소가 계속 바뀐다.
        printf("*p = %d\n", *p);    // p가 역참조하는 원소도 계속 바뀐다.
    }

    return 0;
}