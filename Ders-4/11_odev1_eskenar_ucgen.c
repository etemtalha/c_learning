#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // pow ve sqrt için şart

int main() {
    float esalan;
    int deger = 17, escevre;

    escevre = 3 * deger;
    esalan = (pow(deger, 2) * sqrt(3)) / 4;

    printf("Eskenar ucgenin cevresi = %d\n", escevre);
    printf("Eskenar ucgenin alani = %f\n", esalan);

    return 0;
}