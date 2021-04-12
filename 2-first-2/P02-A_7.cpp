/**
 *    author:  Tonoyama
 *    created: 12.04.2021 14:01:05
 **/

#include <math.h>
#include <stdio.h>
#include <string.h>
#define NUM 100

void Divisors(int n) {
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i)
                printf("%d ", i);
            else
                printf("%d %d ", i, n / i);
        }
    }
}

int main() {
    int num;

    printf("input n => ");
    scanf("%d",&num);

    Divisors(num);
    return 0;
}