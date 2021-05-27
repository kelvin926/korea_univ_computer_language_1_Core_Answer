#include <stdio.h>

void clear(void)
{
    while (getchar() != '\n') {}
}
int main(void)
{
    int prefix, line;
    while (1)
    {
        if (scanf("010-%4d-%4d", &prefix, &line) == 2)
            break;
        printf("error\n");
        clear();
    }
    printf("010-%04d-%04d\n", prefix, line);


#if 0
    char mobile[4], prefix[5], line[5];
    while (1)
    {
        if (scanf("%[0-9]-%[0-9]-%[0-9]", mobile, prefix, line) == 3)
            break;
        printf("잘못 입력하셨습니다.\n");
        clear();
    }
        printf("area = %s\n", mobile);
        printf("prefix = %s\n", prefix);
        printf("line = %s\n", line);
#endif
    return 0;
}