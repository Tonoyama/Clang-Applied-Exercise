/**
*    author:  Tonoyama
*    created: 12.04.2021 13:06:54
**/

#include <stdio.h>
#include <string.h>
#define NUM 100


int main(void) {
    double x, y;

    printf("input X Y => ");
    scanf("%lf%lf", &x, &y);

    if (y > x+1)
    {
        printf("上側領域");
    } else {
        printf("下側領域");
    }

    return 0;
}