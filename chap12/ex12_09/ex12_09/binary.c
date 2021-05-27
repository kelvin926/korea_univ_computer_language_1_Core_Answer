#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ARR_SIZE 20

int is_equal_array(int source[], int target[], int size);

int main(void)
{
    int arr1[ARR_SIZE];
    int arr2[ARR_SIZE];
    int i;
    char filename[128] = "";
    FILE *fout = NULL;
    FILE *fin = NULL;
    int res = 0;

    srand((unsigned int)time(NULL));

    // 배열을 0~99 사이의 임의의 정수로 채운다.
    for (i = 0; i < ARR_SIZE; i++)
        arr1[i] = rand() % 100;

    // 2진 파일로 arr1을 저장한다.
    printf("파일 이름? ");
    gets_s(filename, sizeof(filename));
    fout = fopen(filename, "wb");       // 출력용 2진 파일을 연다.
    if (fout == NULL)
    {
        printf("출력용 파일 열기 실패\n");
        return 1;
    }
    // arr1 배열의 내용을 저장한다.
    fwrite(arr1, sizeof(arr1[0]), ARR_SIZE, fout);
    fclose(fout);
    fout = NULL;    // 파일 포인터도 더 이상 사용되지 않으면 널 포인터로 만든다.

    // 2진 파일을 arr2로 읽어온다.
    fin = fopen(filename, "rb");    // 입력용 2진 파일을 연다.
    if(fin == NULL)
    {
        printf("입력용 파일 열기 실패\n");
        return 1;
    }
    fread(arr2, sizeof(arr2[0]), ARR_SIZE, fin);
    fclose(fin);
    fin = NULL;

    // arr1과 arr2가 같은지 비교한다.
    if (is_equal_array(arr1, arr2, ARR_SIZE))
        printf("2진 파일 입출력 성공\n");
    else
        printf("2진 파일 입출력 실패\n");

    return 0;
}

int is_equal_array(int source[], int target[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        if (source[i] != target[i])
            return 0;  
    return 1;
}