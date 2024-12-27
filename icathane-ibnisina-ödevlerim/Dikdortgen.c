#include <stdio.h>

int main()
{
    float boy, en, cevre, alan;
    printf("Dikdörtgenin uzunluğunu giriniz: ");
    scanf("%f", &boy);
    printf("Dikdörtgenin genişliğini giriniz: ");
    scanf("%d", &en);

    cevre = 2 * (boy + en);

    printf("Dikdörtgenin çevresi = %f birimdir", cevre);

    alan = boy * en;

    printf("Dikdörtgenin alanı = %f birim karedir", alan);

    return 0;
}
