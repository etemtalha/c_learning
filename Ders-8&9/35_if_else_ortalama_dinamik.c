#include <stdio.h>

int main()
{
    printf("ortalama hesaplayici\n\n");
    int sinav1,sinav2,ortalama;

    printf("birinci sinavinizi giriniz : ");
    scanf("%d", &sinav1);

    printf("ikinci sinavinizi giriniz : ");
    scanf("%d", &sinav2);

    ortalama = (sinav1 + sinav2) / 2;
    printf("Ortalama : %d\n", ortalama);
    if(ortalama >= 50)
    {
        printf("Tebirkler sinifi basariyla gectiniz :)\n");
    }
    else
    {
        printf("Maalesef sinifi gecemediniz , sinifi tekrarliyacaksiniz :((\n");
    }
    return 0;
}