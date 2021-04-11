#include <stdio.h>
#include <string.h>

int main(void)
{
    int len;
    char s[] = "today";

    len = strlen(s);
    printf("%s は %d 文字\n", s, len);

    return 0;
}