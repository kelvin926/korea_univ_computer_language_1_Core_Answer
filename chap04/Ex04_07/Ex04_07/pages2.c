#include <stdio.h>

int main(void)
{
    int items = 0;          // 전체 항목 수
    int pages = 0;
    int items_per_page = 0; // 한 페이지 당 항목 수

    printf("항목수? ");
    scanf("%d", &items);

    printf("한 페이지 당 항목수? ");
    scanf("%d", &items_per_page);

    pages = items / items_per_page; // 페이지 수
    items %= items_per_page;        // 남은 항목 수를 다시 items에 저장
    printf("%d 페이지와 %d 항목\n", pages, items);

    return 0;
}
