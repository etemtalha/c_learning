#include <stdio.h>

int main()          //float değerleri kullanıcıdan alıp 4 işlem yaptırmak.
{
    float sayi1 , sayi2 , bolum , toplam , fark , carpim;
    
    printf("Birinci sayiyi giriniz : ");
    scanf("%f", &sayi1);
    printf("ikinci sayiyi giriniz : ");
    scanf("%f", &sayi2);

    bolum = sayi1 / sayi2;
    toplam = sayi1 + sayi2;
    fark = sayi1 - sayi2;
    carpim = sayi1 * sayi2;

    printf(" Bolum = %.2f \n toplam = %.2f \n fark = %.2f \n carpim = %.2f\n",bolum,toplam,fark,carpim);
    return 0;
}