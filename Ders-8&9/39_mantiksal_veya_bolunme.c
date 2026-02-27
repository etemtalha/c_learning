#include <stdio.h>

int main()
{
    int sayi;
    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);

    if(sayi%3==0 || sayi%5==0 || sayi%7==0)
    {
        printf("Girdiginiz sayi 3'e , 5'e veya 7'ye tam bolunur.\n");
    }
    else
    {
        printf("Girdiginiz sayi 3'e , 5'e veya 7'ye tam bolunmez.\n");
    }
    return 0;
}