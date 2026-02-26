#include <stdio.h>

int main()
{
    float boy,yas,bmi;
    boy = 179;
    yas = 21;
    bmi = (boy - 100 + yas/10) * 0.85; // 0.8 ile çarpılırsa kadın - 0.9 ile çarpılırsa erkek 
    printf("ideal kilo olcme programi\n");
    printf("ideal kilonuz = %.2f\n",bmi);           //ben ortalamasını alıcam 0.85           
    return 0;
}