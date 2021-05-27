#include <stdio.h>

#include "point.h"
#include "line.h"   // line.h에 의해 point.h가 두 번 포함된다.

int main(void)
{
    POINT pt = { 30, 40 };
    LINE ln1 = { origin, pt };

    PRT_POINT(ln1.start);
    PRT_POINT(ln1.end);

    printf("길이 = %.2f\n", get_length(&ln1.start, &ln1.end));

    return 0;
}
