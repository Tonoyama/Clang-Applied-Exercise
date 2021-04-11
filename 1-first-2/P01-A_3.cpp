#include <stdio.h>

int main() {
    int bunbo, bunsi;
    int taibunsu, amari;

    scanf("%d%d", &bunbo, &bunsi);

    printf("仮分数 = %d/%d\n", bunsi, bunbo);

    taibunsu = bunsi / bunbo;
    amari = bunsi % bunbo;

    printf("帯分数 = %d %d/%d\n", taibunsu, amari, bunbo);
    return 0;
}