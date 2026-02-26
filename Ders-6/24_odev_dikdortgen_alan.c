#include <stdio.h>

int main()      //6.ders ödev-2
{                           //kısa kenar ve uzun kenarı verilen dikdörtgenin alanı ve çevresi
    float ukenar , kkenar , alan , cevre;
    ukenar = 8.54;
    kkenar = 4.46;
    alan = ukenar * kkenar;
    cevre = (ukenar + kkenar) * 2;
    printf("Dikdortgenin alani = %.2f\n", alan);
    printf("Dikdortgenin cevresi = %.2f\n", cevre); 
    return 0;
}