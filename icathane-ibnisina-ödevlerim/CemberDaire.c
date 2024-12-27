#include <stdio.h>

int main()
{
    float yaricap, cap, cevre,alan;
    printf("Çemberin/Dairenin yarıçapını giriniz: ");
    scanf("%f", &yaricap);
    cap = 2 * yaricap;
    cevre = 2 * 3.14 * yaricap;
    alan = 3.14 * (yaricap * yaricap);

    
    printf("Çemberin çapı = %.2f birimdir \n", cap);
    printf("Çemberin çevresi = %.2f birimdir \n", cevre);
    printf("Dairenin alanı = %.2f birim karedir ", alan);

    return 0;
}
