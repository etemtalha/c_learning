#include <stdio.h>

int main()  //3 ve 5'e tam bölünüyorsa...
{
    int sayi;
    printf("Bir sayi giriniz... ");
    scanf("%d", &sayi);

    if(sayi%5==0 && sayi%3==0)
    {
        printf("Girdiginiz sayi 3 ve 5'e tam bolunur.\n");
    }
    else
    {
        printf("Girdiginiz sayi 3 ve 5'e tam bolunmez.\n");
    }
    return 0;
}