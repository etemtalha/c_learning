#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // Not: Sayısal değerleri char yerine int tanımlamak matematiksel işlem yapmanı sağlar.
    char kitapadi[30], yazar[30], basimev[30], tur[20];
    char sayfasayi[5], basimtrh[6]; 

    printf("Kitap adini giriniz : "); scanf("%s", kitapadi);
    printf("Kitabin turunu giriniz : "); scanf("%s", tur);
    printf("Yazar adini giriniz : "); scanf("%s", yazar);
    printf("Sayfa sayisini giriniz : "); scanf("%s", sayfasayi);
    printf("Basim tarihini giriniz : "); scanf("%s", basimtrh);
    printf("Basim evini giriniz : "); scanf("%s", basimev);

    printf("\n************** Loading.... ******************\n");
    printf("Kitabiniz basariyla sisteme kaydedilmistir :)) \n\n");
    
    printf("Kitap adi : %s - Kitabin turu : %s \n", kitapadi, tur);
    printf("Kitabin Yazari : %s - Kitap sayfa sayisi : %s \n", yazar, sayfasayi);
    printf("Basim tarihi ve Basim evi : %s , %s \n", basimtrh, basimev);
    printf("************* See You Soon *******************\n");

    return 0;
}