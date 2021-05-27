#include <stdio.h>
#include <stdlib.h>

void print_array(const int arr[], int size);
int compare_int(const void *e1, const void *e2);

int main(void)
{
    int size;
    int * arr = NULL;   // 동적 메모리의 주소를 저장할 포인터 변수를 준비한다.
    int i;

    printf("정수의 개수? ");
    scanf("%d", &size);
    // sizeof(int)*size바이트만큼 동적 메모리를 할당하고, 그 주소를 arr에 저장한다.
    arr = malloc(sizeof(int) * size);
    if (arr == NULL)    // 동적 메모리 할당이 실패했는지 확인해야 한다.
    {
        printf("동적 메모리 할당 실패\n");
        return -1;      // 비정상 종료를 나타내는 종료 코드
    }

    // 동적 메모리를 가리키는 포인터도 배열 이름인 것처럼 사용한다.
    printf("%d개의 정수를 입력하세요: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    puts("<< 정렬 전 >>");
    print_array(arr, size);
    qsort(arr, size, sizeof(arr[0]), compare_int);
    puts("<< 정렬 후 >>");
    print_array(arr, size);

    free(arr);      // 사용이 끝나면 동적 메모리를 해제한다.
    arr = NULL;     // 메모리 해제 후 포인터를 널 포인터로 만든다.
    return 0;
}

void print_array(const int arr[], int size)
{
    int  i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int compare_int(const void *e1, const void *e2)
{
    // e1, e2는 int의 주소이므로 const int*형으로 형 변환해서 사용한다.
    const int *p1 = (const int*)e1;
    const int *p2 = (const int*)e2;
    return (*p1 - *p2);
}