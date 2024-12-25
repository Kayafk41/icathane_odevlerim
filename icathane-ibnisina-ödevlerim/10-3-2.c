#include <stdio.h>

int main()
{
    int yil;

    printf("Yıl değerini giriniz : ");
    scanf("%d", &yil);
    if(((yil % 4 == 0) && (yil % 100 != 0)) || (yil % 400 == 0))
    {
        printf("Söz konusu yıl, artık yıldır!...");
    }
    else
    {
        printf("Söz konusu yıl, artık yıl değildir!...");
    }

    return 0;
}