#include <stdio.h>

int main()
{
    int sayi1 , sayi2 , toplam;
    sayi1 = 40;
    sayi2 = 100;
    toplam = sayi1 + sayi2;

    if(toplam<=50)
    {
        printf("Bu iki sayinin toplami = %d  - 50'den kucuk ya da esit.\n",toplam);
    }
    else
    {
        printf("Bu iki sayinin toplami = %d - 50'den buyuk.\n",toplam);
    }
    return 0;
}