#include <stdio.h>
#define NUM 100

int main() {
    char str[NUM];
    int i = 0;
    float x = 0, y = 0, z = 0;
    float alpha, number, symbol;

    printf("Enter characters:");
    scanf("%s", str);
    
    while (str[i] != 0) {
        if (str[i] >= 'a' && str[i] <= 'z')
            x++;
        else if (str[i] >= '0' && str[i] <= '9')
            y++;
        else
            z++;
        i++;
    }
    
    printf("Number of each character:%f %f %f\n", x, y, z);
    
    alpha = (x / i) * 100;
    number = (y / i) * 100;
    symbol = (z / i) * 100;
    
    printf("Various proportions:Alphabet%.1f Number%.1f Symbol%.1f\n", alpha, number, symbol);
    
    return 0;
}
