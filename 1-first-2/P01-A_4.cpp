#include <stdio.h>

int main() {
    int kingaku;
    int itiman, gosen, nisen, sen, gohyaku, hyaku, gozyu, zyu, go, iti;

    printf("金額 => ");
    scanf("%d", &kingaku);

    itiman = kingaku / 10000;
    kingaku = kingaku - itiman * 10000;
    printf("10000円 = %d枚\n", itiman);

    gosen = kingaku / 5000;
    kingaku = kingaku - gosen * 5000;
    printf("5000円 = %d枚\n", gosen);

    nisen = kingaku / 2000;
    kingaku = kingaku - nisen * 2000;
    printf("2000円 = %d枚\n", nisen);

    sen = kingaku / 1000;
    kingaku = kingaku - sen * 1000;
    printf("1000円 = %d枚\n", sen);

    gohyaku = kingaku / 500;
    kingaku = kingaku - gohyaku * 500;
    printf("500円 = %d枚\n", gohyaku);

    hyaku = kingaku / 100;
    kingaku = kingaku - hyaku * 100;
    printf("100円 = %d枚\n", hyaku);

    gozyu = kingaku / 50;
    kingaku = kingaku - gozyu * 50;
    printf("50円 = %d枚\n", gozyu);

    zyu = kingaku / 10;
    kingaku = kingaku - zyu * 10;
    printf("10円 = %d枚\n", zyu);

    go = kingaku / 5;
    kingaku = kingaku - go * 5;
    printf("5円 = %d枚\n", go);

    iti = kingaku / 1;
    kingaku = kingaku - iti * 1;
    printf("1円 = %d枚\n", iti);

    return 0;
}