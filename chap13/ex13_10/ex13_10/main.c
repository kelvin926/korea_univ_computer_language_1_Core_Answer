#include <stdio.h>

#include "point.h"

int main(void)
{
    POINT pt = { 0 };

    set_point(&pt, 30, 40);

    PRT_POINT(origin);
    PRT_POINT(pt);

    printf("±Ê¿Ã = %.2f\n", get_length(&origin, &pt));

    return 0;
}
