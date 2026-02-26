#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int s1, s2;
    printf("Iki sayi giriniz: ");
    scanf("%d %d", &s1, &s2); // Tek scanf ile iki veri alabilirsin

    printf("Toplam: %d\nFark: %d\nCarpim: %d\n", (s1+s2), (s1-s2), (s1*s2));
    return 0;
}