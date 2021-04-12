/**
*    author:  Tonoyama
*    created: 12.04.2021 14:01:05
**/

#include <stdio.h>
#include <string.h>
#define NUM 100

int main()
{
    int i;
 
    int num;
 
    printf("input n => ");
    scanf("%d",&num);
 
    printf("%d の約数 = {", num);
    for( i=1; i<=num; ++i ){
        if( num%i == 0 )
        printf("%d ", i);
    }
    printf("}\n");
 
    return 0;
}
