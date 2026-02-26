#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int s1, s2, s3;
    float ortalama;
    printf("3 sinav notu giriniz: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    ortalama = (s1 + s2 + s3) / 3.0; // Hassas hesap için 3.0 kullanıldı
    printf("Ortalamaniz: %.2f\n", ortalama); // %.2f noktadan sonra 2 basamak gösterir
    return 0;
}   