#include <stdio.h>

int main() {
    int bsinir = 15, esinir = 8;
    int ybagaj = 18, yel = 9;
    int ucretlibagaj;

    // Fazla kiloları bulup 5 ile çarpıyoruz
    ucretlibagaj = ((ybagaj - bsinir) + (yel - esinir)) * 5;

    printf("Fazla bagaj hakki icin odeyeceginiz tutar = %d TL\n", ucretlibagaj);
    return 0;
}