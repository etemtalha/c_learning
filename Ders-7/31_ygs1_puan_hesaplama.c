#include <stdio.h>

int main()   //ygs 1 puan türü hesaplama
{           
    float turkce,mat,sosyal,fen,taban,tpuan;
    taban = 100.160;
    
    printf("Turkce netinizi giriniz : ");
    scanf("%f", &turkce);
    
    printf("Matematik netinizi giriniz : ");
    scanf("%f", &mat);
    
    printf("Sosyal netinizi giriniz : ");
    scanf("%f", &sosyal);

    printf("Fen netinizi giriniz : ");
    scanf("%f", &fen);

    tpuan = turkce*1.999 + mat*3.998 + sosyal*1 + fen*2.999 + taban;
    printf("YGS 1 sinavindan alacaginiz puan = %f \n", tpuan);
    return 0;
}