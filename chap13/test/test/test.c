#include <stdio.h>

#define ARR_SIZE 10
#define DEBUG

#define PI 3.1415		// �Ǽ��� ����� ��ũ�� ����� �����Ѵ�.
area = PI * radius * radius;	// area = 3.1415 * radius * radius; �� ó���ȴ�.

#define ABS(a) ((a>0)?(a):(-a))
#define SQUARE(x) ((x)*(x))

#define OPEN_ERROR "���� ���� ����"
#define IO_ERROR "����� ����"
int main(void)
{
#define DWORD unsigned long
    DWORD dwflag;
#define PRINT puts
    PRINT("test");
    FILE *fp = fopen(...);
    if (fp == NULL)
        printf(OPEN_ERROR); // printf("���� ���� ����");
    int sum = 0;
    int i;
    for (i = 0; i < MAX; i++)
        sum += i;
    return 0;
}