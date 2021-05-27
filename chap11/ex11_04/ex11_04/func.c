// 함수의 정의를 모아놓은 소스 파일 func.c

int get_gcd(int x, int y)     // 함수의 정의의 extern은 생략할 수 있다.
{
    int r;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

extern int get_factorial(int num)
{
    int i;
    int result = 1;

    for (i = 1; i <= num; i++)
        result *= i;
    return result;
}