#include <stdio.h>
// num�� 2��� ����� �Լ�(double�� Ű�����̹Ƿ� �Լ������� ����� �� ����.)
void double_it(int num) 
{
    num *= 2;       // �Ű����� num�� �Լ��� ������ �� �Ҹ�ȴ�.
}
// num�� 2��� ���� �����ϴ� �Լ�
int double_this(int num)
{
    return num * 2; // 2��� ���� ���� �����ϹǷ� �Լ��� ȣ���� ������ ���޵ȴ�.
}

int main(void)
{
    int x = 5;

    double_it(x);       // x�� ������� �ʴ´�.
    printf("double_it ȣ�� �� : x = %d\n", x);

    x = double_this(x); // �Լ��� ���� ���� �޾ƿͼ� x�� �����Ѵ�.
    printf("double_this ȣ�� �� : x = %d\n", x);

    return 0;
}