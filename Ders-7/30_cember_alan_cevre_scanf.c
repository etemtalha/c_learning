#include <stdio.h>
#include <math.h> // pow() fonksiyonu için gerekli

int main() //Çemberde çevre ve alan hesabı
{
    float pi , r , cevre , alan;
    pi = 3.14;
    
    printf("Yari capi giriniz : ");
    scanf("%f", &r);

    cevre = 2 * pi * r;
    alan = pi * pow(r,2);

    printf("Verdiginiz yaricap bilgisine gore\n cemberin alani = %.2f cm*cm \n cemberin cevresi = %.2f cm\n", alan,cevre);
    return 0;
}