#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int misir, cola, su, bilet, toplam;
    printf("Siparis adetlerini giriniz (Misir, Cola, Su, Bilet): ");
    scanf("%d %d %d %d", &misir, &cola, &su, &bilet);

    toplam = (misir * 2) + (cola * 2) + (su * 1) + (bilet * 8);
    printf("\n--- Hesap Ozeti ---\nToplam Tutar: %d TL\nAfiyet olsun!\n", toplam);
    return 0;
}