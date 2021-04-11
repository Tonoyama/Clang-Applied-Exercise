#include <stdio.h>

int main() {
    double a,b,c,d;
    
    printf("台形の上底:\n");
    scanf("%lf", &a);
    printf("台形の下底:\n");
    scanf("%lf", &b);
    printf("高さ:\n");
    scanf("%lf", &c);

    d = ((a+b)*c)/2;
    printf("台形面積は、%lf\n" ,d);

    return 0;
}