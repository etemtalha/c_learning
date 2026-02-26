#include <stdio.h>

int main() //3 sınavı girilmiş bir dersin ortalaması bu sefer float bir şekilde 
{
    float sinav1,sinav2,sinav3,ortalama;
    sinav1 = 75;
    sinav2 = 55;
    sinav3 = 42;
    ortalama = (sinav1 + sinav2 + sinav3) / 3;
    printf("Ders ortalamasi = %.3f\n", ortalama);
    return 0;
}