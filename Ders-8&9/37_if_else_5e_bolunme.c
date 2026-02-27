#include <stdio.h>

int main()
{
    int sayi;
    printf("Bir sayi giriniz...");
    scanf("%d", &sayi);

    if(sayi%5==0)
    {
        printf("5'e tam bolunur.\n");
    }
    else
    {
        printf("5'e tam bolunmez.\n");
    }
    return 0;
}