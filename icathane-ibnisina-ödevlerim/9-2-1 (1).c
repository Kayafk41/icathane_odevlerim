#include <stdio.h>

int main()
{
    int sayi = 10;
    int * isaretci;

    isaretci = &sayi;
    printf("sayi değişkeninin adresi = %d\n", &sayi);
    printf("sayi değişkeninin içeriği = %d\n", sayi);
    printf("isaretci değişkeninin adresi = %d\n", &isaretci);
    printf("isaretci değişkeninin içeriği = %d\n", isaretci);
    printf("isaretci değişkeninin işaret ettiği değer = %d\n", *isaretci);

    return 0;
}