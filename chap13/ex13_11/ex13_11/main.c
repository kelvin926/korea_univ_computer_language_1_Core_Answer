#include <stdio.h>

#include "point.h"
#include "line.h"   // line.h�� ���� point.h�� �� �� ���Եȴ�.

int main(void)
{
    POINT pt = { 30, 40 };
    LINE ln1 = { origin, pt };

    PRT_POINT(ln1.start);
    PRT_POINT(ln1.end);

    printf("���� = %.2f\n", get_length(&ln1.start, &ln1.end));

    return 0;
}
