#include <stdio.h>

int main()  //aylık 2500TL maaş alan kişinin maaşına %12 zam gelirse yeni maaşı ne olur?
{
    float maas , zamyuzde , guncelmaas , zamtl;

    printf("Aylik maasinizi giriniz : ");
    scanf("%f", &maas);

    printf("Zam oranini giriniz (%%) :");
    scanf("%f", &zamyuzde);

    zamtl = maas * (zamyuzde / 100);
    guncelmaas = maas + zamtl;

    printf("Zam sonrasi maasiniz = %.3f TL\n", guncelmaas);
    return 0;
}