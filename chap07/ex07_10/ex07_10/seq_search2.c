#include <stdio.h>

int main(void)
{
    int data[] = { 78, 34, 52, 15, 63, 15, 25 };
    int size;
    int key, i;
    int found;  // Ž���� �����ϸ� 1, �����ϸ� 0
   
    size = sizeof(data) / sizeof(data[0]);
    printf("arr = ");
    for (i = 0; i < size; i++)
        printf("%d ", data[i]);
    printf("\n");

    printf("ã�� ��(Ű)? ");
    scanf("%d", &key);
    found = 0;
    for (i = 0; i < size; i++) {
        if (data[i] == key) {
            found = 1;
            break;  // Ž�� ���� �� for Ż��
        }
    }
    if (found == 1)    // Ž�� ������ ��� i�� ã�� �׸��� �ε����̴�.
        printf("ã�� ������ �ε���: %d\n", i);
    else
        printf("Ž�� ����\n");
    return 0;
}