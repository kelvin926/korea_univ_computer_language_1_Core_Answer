#include <stdio.h>

int main(void)
{
    int score;

    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &score);

    if (score < 70)
        printf("���!!!\n");  // score < 70�� ��쿡 ����ȴ�.
    
    // if�� ���� ���忡�� ������ �帧�� �ٽ� ������.
    printf("���� ������ ������ ���Դϴ�.\n");  

    return 0;
}