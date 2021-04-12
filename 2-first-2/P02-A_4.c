/**
*    author:  Tonoyama
*    created: 12.04.2021 13:43:02
**/

#include <stdio.h>
#include <string.h>
#define NUM 100


int main(void) {
    int n;
    printf("input 年齢 =>");
    scanf("%d",&n);

    if (n < 6)
    {
        printf("幼児\n");
    } else if (6 <= n && n < 12)
    {
        printf("小人");
    } else if (12 <= n && n < 18)
    {
        printf("中人");
    } else {
        printf("大人");
    }
    

    return 0;
}