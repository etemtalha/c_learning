#include <stdio.h>

int main()  
{
    int derece;
    printf("Sicaklik degerini giriniz : ");
    scanf("%d", &derece);

    if(derece <= 0)
    {
        printf("Suanda buz halinde\n");
    }
    if(derece > 0 && derece < 100)
    {
        printf("Suanda sivi halinde\n");
    }
    if(derece >= 100)
    {
        printf("Suanda gaz halinde\n");
    }
    return 0;
}