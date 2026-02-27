#include <stdio.h>

int main()    // 3 adet sınav noturu girişi isteyip ardından ortalama hesaplayan otomasyon
{
    float sinav1 , sinav2 , sinav3, ortalama;

    printf("Matematik dersi'nin 1.sinav notunu giriniz : ");
    scanf("%f", &sinav1);

    printf("Matematik dersi'nin 2.sinav notunu giriniz : ");
    scanf("%f", &sinav2);

    printf("Matematik dersinin 3.sinav notunu giriniz : ");
    scanf("%f", &sinav3);

    ortalama = (sinav1 + sinav2 + sinav3) / 3;
    printf("Girdiginiz notlar sonucu ders ortalamaniz = %.2f\n", ortalama);
    printf("Have a nice day\n");
    return 0;
}