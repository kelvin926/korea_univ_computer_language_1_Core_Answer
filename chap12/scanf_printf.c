#include <stdio.h>

void clear(void)
{
    while (getchar() != '\n') {}
}
int main(void)
{
#if 0
    FILE *fp = NULL;
    int n;
    scanf("%d\n", &n);

    if (n == 1)
        fp = stdout;
    else
        fp = fopen("output.txt\n", "w");

    fprintf(fp, "Hello World\n");

    if (n != 1)
        fclose(fp);
#endif

#if 0
    int prefix, line;
    while (1)
    {
        if (scanf("010-%4d-%4d", &prefix, &line) == 2)
            break;
        printf("error\n");
        clear();
    }
    printf("010-%04d-%04d\n", prefix, line);
#endif
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
#if 0

    int num;
    while (1) {
        int res = scanf("%d", &num);
        if (res == 1)
            break;
        printf("잘못 입력했습니다. 정수를 입력하세요.\n");
        clear();
    }
    printf("num = %d\n", num);

    char mobile[4], prefix[5], line[5];

    scanf("%3s-%4s-%4s", mobile, prefix, line);
    printf("area = %s\n", mobile);
    printf("prefix = %s\n", prefix);
    printf("line = %s\n", line);

    char number[100] = "";
    scanf("%[0-9]", number);
    printf("str = %s\n", number);




    char phone[20];
    printf("전화번호: ");
    //scanf("%[0-9]", phone);
    printf("phone = %s\n", phone);

    int n;
    char ch;

    scanf("%d%c", &n, &ch);
    printf("n = %d, ch = %d\n", n, ch);


    char mobile[4]; 
    char prefix[5];
    char line[5];

    scanf("%3s%4s%4s", mobile, prefix, line);
    printf("area = %s\n", mobile);
    printf("prefix = %s\n", prefix);
    printf("line = %s\n", line);


    int a, b;
    scanf("%2d%3d", &a, &b);

    printf("a = %d\nb = %d\n", a, b);
    scanf("%d", &a);
    printf("a = %d\nb = %d\n", a, b);


    short s;
    int i;
    scanf("%hd %d", &s, &i);

    float f;
    double d;
    scanf("%f %lf", &f, &d);

    printf("%-10d", 789);
    printf("%+d", 789);
    printf("% d", 789);
    printf("% d", -789);
    printf("%010d", 789);
    printf("%#x", 789);

    printf("% d", 987);
    printf("%d", -987);
    printf("%010f", 4.5678);
    printf("%10.3e", 4.5678);  
    printf("%10.3g", 4.5678);


    printf("%c\n", 'A');
    printf("%d\n", 333);
    printf("%i\n", 333);
    printf("%o\n", 333);
    printf("%u\n", 333);
    printf("%x\n", 333);
    printf("%X\n", 333);
    printf("%e\n", 1.2345);
    printf("%E\n", 1.2345);
    printf("%f\n", 1.2345);
    printf("%g\n", 1.2345);
    printf("%G\n", 1.2345);
    printf("%p\n", "xyz");
    printf("%s\n", "xyz");

    short x = 123;
    printf("%x\n", x);
#endif

    return 0;
}