#include <stdio.h>

int main(void)
{
    int age, fee;

    printf("나이? ");
    scanf("%d", &age);

    if (age >= 8) {
        if (age >= 65) {  // if문 안에 다른 if문을 포함한다.
            fee = 5000;
        }
        else {
            fee = 10000;
        }
    }
    else {
        fee = 0;
    }
    printf("입장료: %d원\n", fee);

    return 0;
}