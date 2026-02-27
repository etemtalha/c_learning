#include <stdio.h>

int main()   // ödev-1
{
    printf("****Ders ortalama hesaplama****\n\n");
    float sinav1 , sinav2 , sinav3 , proje , ortalama;
    
    printf("Sinav1'i giriniz : ");
    scanf("%f", &sinav1);

    printf("Sinav2'yi giriniz : ");
    scanf("%f", &sinav2);

    printf("Sinav3'u giriniz : ");
    scanf("%f", &sinav3);

    printf("Proje'yi giriniz : ");
    scanf("%f", &proje);

    ortalama = (sinav1 + sinav2 + sinav3 + proje) / 4;
    
    if(ortalama<50)
    {
        printf("bu dersten FF ile kaldiniz.\n");
    }
    if(ortalama>=50 && ortalama<60)
    {
        printf("bu dersten DD ile gectiniz.\n");
    }
    if(ortalama>=60 && ortalama<70)
    {
        printf("bu dersten CC ile gectiniz.\n");
    }
    if(ortalama>=70 && ortalama<85)
    {
        printf("bu dersten BB ile gectiniz.\n");
    }
    if(ortalama>=85)
    {
        printf("bu dersten AA ile gectiniz tebrikler :) \n");
    }
    return 0;
}