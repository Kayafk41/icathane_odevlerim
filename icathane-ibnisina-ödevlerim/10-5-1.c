#include <stdio.h>

int main()
{
    int maliyet, satis_bedeli, kar_zarar; 
    printf("Maliyet bedelini giriniz: ");
    scanf("%d", &maliyet);
    printf("Satış bedelini giriniz: ");
    scanf("%d", &satis_bedeli);
    
    if(satis_bedeli > maliyet)
    {
        kar_zarar = satis_bedeli - maliyet;
        printf("Kar = %d", kar_zarar);
    }
    else if(maliyet > satis_bedeli)
    {
        kar_zarar = maliyet - satis_bedeli;
        printf("Zarar = %d", kar_zarar);
    }
    else
    {
        printf("Kar veya zarar edilmemiştir.");
    }

    return 0;
}