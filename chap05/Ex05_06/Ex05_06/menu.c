#include <stdio.h>

int main(void)
{
    int menu;                       // 선택된 메뉴 번호
    char filename[32] = "test.avi"; // 디폴트로 재생할 파일 이름
           
    printf("1.파일 열기\n");        // 메뉴를 출력한다.
    printf("2.재생\n");
    printf("3.재생 옵션\n");
    printf("선택: ");

    scanf("%d", &menu);             // 메뉴 번호를 입력받는다.
    if (menu == 1) {                // 파일 열기 메뉴
        printf("재생할 파일 이름? ");
        scanf("%s", filename);
    }
    else if (menu == 2) {           // 재생 메뉴
        printf("%s를 재생합니다.\n", filename);
    }
    else if (menu == 3) {           // 재생 옵션 메뉴
        printf("재생 옵션을 선택합니다.\n");
    }
    else {                          // 1~3이외의 메뉴 번호 선택 시
        printf("잘못 선택하셨습니다.\n");
    }

    return 0;
}