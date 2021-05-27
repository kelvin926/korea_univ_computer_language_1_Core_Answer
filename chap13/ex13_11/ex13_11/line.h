#ifndef LINE_H_
#define LINE_H      // line.h의 포함 여부를 나타내는 매크로

#include "point.h"

typedef struct line {
    POINT start, end;
} LINE;

#endif