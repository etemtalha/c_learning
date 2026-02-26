#include <stdio.h>

int main()          //float 2 değişken ile toplama
{
    float sayi,sayi1,toplam;
    sayi = 3.42;
    sayi1 = 9.1234;
    toplam = sayi + sayi1;
    printf("%.2f\n",toplam); //%.2f yapmamız ondalıktan sonraki 2 basamağı yazdır demek gerisi hafızada kalıyor.
    return 0;
}