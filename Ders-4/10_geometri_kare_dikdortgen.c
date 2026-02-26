#include <stdio.h>

int main() {
    // Kare Hesaplaması
    int karekenar = 16;
    int kare_cevre = karekenar * 4;
    int kare_alan = karekenar * karekenar;
    printf("Kare Alani: %d, Cevresi: %d\n", kare_alan, kare_cevre);

    // Dikdörtgen Hesaplaması
    int kisakenar = 24, uzunkenar = 32;
    int dik_alan = kisakenar * uzunkenar;
    int dik_cevre = 2 * (kisakenar + uzunkenar);
    printf("Dikdortgen Alani: %d, Cevresi: %d\n", dik_alan, dik_cevre);

    return 0;
}