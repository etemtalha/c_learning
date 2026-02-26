#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // Değişken tanımlamaları
    char kitapad[20] = "Dijital Kale";
    char yazar[20] = "Dan Brown";
    char tur[20] = "Tekno-Gerilim";
    int sayfasayisi = 432;
    int basimyili = 1998;

    // Ekrana yazdırma (Format belirleyiciler: %s metin, %d tam sayı)
    printf("----------- Kitap Tanitimi ----------------\n\n");
    printf("Kitap adi    => %s\n", kitapad);
    printf("Yazar        => %s\n", yazar);
    printf("Tur          => %s\n", tur);
    printf("Sayfa Sayisi => %d\n", sayfasayisi);
    printf("Basim Yili   => %d\n", basimyili);

    return 0;
}