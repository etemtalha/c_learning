#include <stdio.h>

int main() {
    int sayi1 = 250, sayi2 = 123;
    int toplam, fark, carp, bolum;

    toplam = sayi1 + sayi2;
    fark = sayi1 - sayi2;
    carp = sayi1 * sayi2;
    bolum = sayi1 / sayi2; // Not: C dilinde int / int işleminin sonucu tam sayıdır.

    printf("Sayilarin;\n Toplami: %d\n Farki: %d\n Carpimi: %d\n Bolumu: %d\n", toplam, fark, carp, bolum);

    return 0;
}