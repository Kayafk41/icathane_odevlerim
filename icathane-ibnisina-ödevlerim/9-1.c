#include <stdio.h>

int main()
{
	char karakter = 'C';
    int tamsayi = 1;
    float gercel_sayi = 10.4f;
    long long buyuk_tamsayi = 989898989ll;
    printf("karakter değişkeninin değeri= %c, karakter değişkeninin adresi = %u\n", karakter, &karakter);
    printf("tamsayi değişkeninin değeri= %d, tamsayi değişkeninin adresi= %u\n", tamsayi, &tamsayi);
    printf("gercel_sayi değişkeninin değeri= %f, gercel_sayi değişkeninin adresi= %u\n", gercel_sayi, &gercel_sayi);
    printf("buyuk_tamsayi değişkeninin değeri= %lld, buyuk_tamsayi değişkeninin adresi= %u", buyuk_tamsayi, &buyuk_tamsayi);

    return 0;
}