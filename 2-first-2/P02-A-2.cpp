/**
 *    author:  Tonoyama
 *    created: 12.04.2021 13:14:26
 **/

#include <stdio.h>

int jijo(int a) { return a * a; }

int tasu(int n) {
    int s = 0, i=0;
    while (i<=n)
    {
        s += jijo(i);
        i++;
    }
    return s;
}

int main(void) {
    printf("1 から N までの二乗和を求める。\n");

    int n = 0;
    printf("input n =>");
    scanf("%d", &n);

    printf("2乗和 = %d\n", tasu(n));
}