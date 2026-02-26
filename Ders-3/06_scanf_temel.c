#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char kitapadi[25];
    printf("Kitap adi giriniz: ");
    
    // scanf %s kullanımı boşluk görene kadar okur. 
    // "Sucluluk ve Ceza" yazarsan sadece "Sucluluk" kısmını alır.
    scanf("%s", kitapadi); 

    printf("Girdiginiz kitap : %s\n", kitapadi);
    return 0;
}