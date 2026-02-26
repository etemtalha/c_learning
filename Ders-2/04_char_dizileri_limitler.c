#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // Karakter dizilerinde (string) boyut belirleme denemesi
    // Önemli: C'de metinlerin sonuna görünmez bir '\0' (null) karakteri eklenir.
    // Yani 10 karakterlik bir dizi aslında 9 karakter + 1 bitiş karakteri tutar.

    char kitapad[10] = "Suskunlar"; 
    printf("Kitap Adi => %s\n", kitapad); // %s = String (Metin) demektir.

    // 10 karakterlik yere 15 karakter yazmaya çalışırsak C sadece sığdığı kadarını alır 
    // veya bellekte taşma yapabilir. Güvenli kodlama için boyuta dikkat!
    char yazarkitap[10] = "TCT"; 
    printf("Yazar => %s\n", yazarkitap);

    return 0;
}