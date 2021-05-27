#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ARR_SIZE 20
int compare_int(const void *e1, const void *e2);
void print_array(const int arr[], int size, FILE *fp);    // 배열 원소를 출력하는 함수

int main(void)
{
    int arr[ARR_SIZE];
    int i;
    char filename[128] = "";
    FILE *fp = NULL;

    srand((unsigned int)time(NULL));
    // 배열을 0~99 사이의 임의의 정수로 채운다.
    for (i = 0; i < ARR_SIZE; i++)
        arr[i] = rand() % 100;

    printf("파일 이름? ");
    gets_s(filename, sizeof(filename));
    if (strcmp(filename, ".") == 0)
        fp = stdout;        // 파일 이름이 "."이면 표준 출력에 출력한다.
    else
    {
        fp = fopen(filename, "w");
        if (fp == NULL)
            fp = stdout;    // 파일 열기 실패면 표준 출력에 출력한다.
    }

    fputs("정렬 전: ", fp);
    print_array(arr, ARR_SIZE, fp);

    qsort(arr, ARR_SIZE, sizeof(arr[0]), compare_int);
    fputs("정렬 후: ", fp);
    print_array(arr, ARR_SIZE, fp);

    fclose(fp);
    return 0;
}

int compare_int(const void *e1, const void *e2)
{
    const int *p1 = (const int*)e1;
    const int *p2 = (const int*)e2;
    return (*p1 - *p2);
}

void print_array(const int arr[], int size, FILE *fp)
{
    int  i;
    for (i = 0; i < size; i++)
        fprintf(fp, "%2d ", arr[i]);
    fprintf(fp, "\n");
}