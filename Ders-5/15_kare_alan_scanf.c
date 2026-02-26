#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // pow() için mutlaka ekle

int main() {
    int kenar;
    printf("Kare kenari: ");
    scanf("%d", &kenar);

    printf("Cevre: %d\nAlan: %.0f\n", (kenar * 4), pow(kenar, 2));
    return 0;
}