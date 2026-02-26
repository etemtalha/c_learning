#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // Boyutları biraz artırdım ki "Null Terminator" \0 sığabilsin.
    char Ad[20], Soyad[20], Yas[5], Sehir[20], Meslek[30];

    printf("Isminiz nedir? : "); scanf("%s", Ad);
    printf("Soyadiniz nedir? : "); scanf("%s", Soyad);
    printf("Yasiniz nedir? : "); scanf("%s", Yas);
    printf("Yasadiginiz sehir nedir? :"); scanf("%s", Sehir);
    printf("Mesleginiz nedir? : "); scanf("%s", Meslek);

    printf("\n--- Kayit Ozeti ---\n");
    printf("Ad : %s  Soyad : %s\n", Ad, Soyad);
    printf("Yas : %s\n", Yas);
    printf("Sehir ve Meslek : %s , %s\n", Sehir, Meslek);

    return 0;
}