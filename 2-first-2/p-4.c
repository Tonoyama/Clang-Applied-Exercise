/**
*    author:  Tonoyama
*    created: 12.04.2021 01:37:55
**/

#include <stdio.h>
#include <string.h>
#define NUM 100


int main(void) {
    char str[NUM];
    int i;

    printf("入力：");
    scanf("%s", str);

    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]=='a')
        {
            str[i] = 'b';
        }
    }
    printf("置き換え：%s\n", str);

    return 0;
}