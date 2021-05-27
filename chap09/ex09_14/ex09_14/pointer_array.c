#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *str_menu[] = {  // str_menu는 원소가 5개인 포인터 배열
        "끝내기",
        "새 프로젝트", 
        "프로젝트 열기",
        "솔루션 빌드",
        "디버깅 시작"
    };
    int sz_menu = sizeof(str_menu) / sizeof(str_menu[0]);
    int menu;

    while (1)
    {
        int i;
        for (i = 0; i < sz_menu; i++)
            printf("%d.%s\n", i, str_menu[i]);

        printf("메뉴 선택? ");
        scanf("%d", &menu);
        if (menu == 0)  // menu를 입력받은 다음 루프 탈출 조건을 검사한다.
            break;
        else if (menu > 0 && menu < sz_menu)
            printf("%s 메뉴를 선택했습니다.\n\n", str_menu[menu]);
        else
            printf("잘못 선택했습니다.\n\n");
    }

    return 0;
}