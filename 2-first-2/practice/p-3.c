/**
*    author:  Tonoyama
*    created: 12.04.2021 01:05:48
**/

#include <stdio.h>
#include <string.h>
#define NUM 100


int main(void) {
    int i = 0;
    char str1[12] = "DRAGON";
    char str2[] = "QUEST";

    if (strcmp(str1,str2) == 0) {
		printf("同じ\n");
	} else {
		printf("違う\n");
	}

    int d = 'a' - 'A';
    for (int i = 0; i < strlen(str1); i++) {
        if(str1[i]<'a'){
            str1[i] += d;
        }
        else
            str1[i] -= d;
    }

    // for(i=0;i<=strlen(str1);i++){
    // if(str1[i]>=97&&str1[i]<=122)
    //     str1[i]=str1[i]-32;
    // }
    // printf("%s", str1);

	strcat(str1,str2);
    printf("%s\n", str1);
    
    return 0;
}