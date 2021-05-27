#include <stdio.h>

void open_file(void)
{
    printf("파일을 오픈합니다....\n");
}

void save_file(void)
{
    printf("파일을 저장합니다....\n");
}

void options(void)
{
    printf("옵션을 설정합니다....\n");
}

void print_file(void)
{
    printf("파일을 인쇄합니다....\n");
}

typedef void(*PFUNC)(void);     // 함수 포인터형

int main(void)
{
    // 함수의 주소로 함수 포인터 배열을 초기화한다.
    // 메뉴 번호와 메뉴를 선택했을 때 호출할 함수의 인덱스가 같아야 한다.
    PFUNC pf_arr[] = { open_file, save_file, options, print_file };
    //void(*pf_arr[])(void) = { 
    //    open_file, save_file, options, print_file 
    //};

    const char *menu_str[] = {  // 메뉴 출력에 사용할 문자열 포인터 배열
        "파일 열기", "파일 저장", "옵션", "인쇄", "종료" 
    };
    enum {OPEN_FILE, CLOSE_FILE, OPTIONS, PRINT, QUIT};   // 열거 상수
    int size = sizeof(pf_arr) / sizeof(pf_arr[0]);

    while (1)
    {
        int i;
        int selected = 0;
        for (i = 0; i < size + 1; i++)   // 종료 메뉴까지 출력해야 한다.
            printf("%d. %s\n", i, menu_str[i]);
        printf("선택? ");
        scanf("%d", &selected);
        if (selected == QUIT)
            break;
        if (selected >= 0 && selected < size) {
            // 선택된 메뉴 번호를 함수 포인터 배열의 인덱스로 사용한다.
            pf_arr[selected]();
        }
        else {
            printf("잘못 선택하셨습니다.\n");
        }
    }
    return 0;
}