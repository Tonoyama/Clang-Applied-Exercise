/**
*    author:  Tonoyama
*    created: 12.04.2021 13:31:49
**/

#include <stdio.h>
#include <string.h>
#define NUM 100


int tasu(int n) {
    int i, sum = 1, c=0;
    for (i = 0; i < n; ++i) {
        sum += sum * i;
        c = sum + c;
    };
    return c;
}

int main(void) {
  int n = 0;
  printf("input n => ");
  scanf("%d",&n);

  printf("%d\n", tasu(n));
}