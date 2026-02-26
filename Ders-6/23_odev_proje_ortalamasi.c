#include <stdio.h>

int main()   //6.ders ödev-1
{
    printf("Ders ortalamasi hesaplama\n");

    float sinav1 , sinav2 , sinav3 , proje , ortalama;
    sinav1 = 35;
    sinav2 = 55;
    sinav3 = 65;
    proje = 100;
    ortalama = (sinav1 + sinav2 + sinav3 + proje) / 4;
    printf("--------Welcome----------\n");
    printf("Ders ortalamaniz = %.2f\n", ortalama);
    printf("Have a nice day...\n");
    return 0;
}