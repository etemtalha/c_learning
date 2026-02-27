#include <stdio.h>

int main()
{
    int sinav1 , sinav2 , ortalama;
    sinav1 = 55;
    sinav2 = 5;
    ortalama = (sinav1 + sinav2) / 2;

    if(ortalama > 50)
    {
        printf("Tebrikler sinifi gectiniz ortalamaniz = %d\n", ortalama);
    }
    else
    {
        printf("Maalesef sinifi gecemediniz ortalamaniz = %d ile kaldiniz.\n",ortalama);
    }
    return 0;
}