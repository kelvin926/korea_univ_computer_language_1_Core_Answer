#include <stdio.h>

int main(void)
{
    int age, fee;

    printf("����? ");
    scanf("%d", &age);

    if (age >= 8) {
        if (age >= 65) {  // if�� �ȿ� �ٸ� if���� �����Ѵ�.
            fee = 5000;
        }
        else {
            fee = 10000;
        }
    }
    else {
        fee = 0;
    }
    printf("�����: %d��\n", fee);

    return 0;
}