#include <stdio.h>

#define SQUARE(x) ((x) * (x))   // �Լ� ��ũ���� ����

int square(int x)               // �Ϲ� �Լ��� ����
{ 
    return x * x; 
}

int main(void)
{
    int a = 5;
    printf("SQUARE(10) = %d\n", SQUARE(10));     // 10 * 10���� ó��
    printf("SQUARE(1.5) = %f\n", SQUARE(1.5));      // 1.5 * 1.5�� ó��
    printf("SQUARE(\'a\') = %d\n", SQUARE('a'));    // 'a' * 'a' --> 97 * 97�� ó��
    //printf("SQUARE(\"a\") = %d\n", SQUARE("a"));  // "a" * "a"�� ������ ����

    printf("square(1 + 2) = %d\n", square(1 + 2));  // square(3)���� ó��
    printf("SQUARE(1 + 2) = %d\n", SQUARE(1 + 2));  // ((1 + 2) * (1 + 2))�� ó��

    printf("square(++a) = %d\n", square(++a));      // square(6); ȣ��
    a = 5;
    printf("SQUARE(++a) = %d\n", SQUARE(++a));      // ((++a) * (++a)�� ó��

    printf("square(3.1) = %d\n", square(3.1));      // square(3)���� ó��
    printf("SQUARE(3.1) = %f\n", SQUARE(3.1));      // ((3.1) * (3.1)) �� ó��

    return 0;
}