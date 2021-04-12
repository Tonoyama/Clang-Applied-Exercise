/**
*    author:  Tonoyama
*    created: 12.04.2021 13:31:49
**/

#include <stdio.h>
#include <string.h>
#define NUM 100


int tasu(int n) {
    int i, s = 1;
    for (i=1; i<=n; i++) s *= 2 * i;
    return s;
}

int main(void) {
  int n = 0;
  printf("input n =>");
  scanf("%d",&n);

  printf("%d\n", tasu(n));
}