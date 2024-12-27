#include <stdio.h>
#include <math.h>  // M_PI sayısını kullanmak amacıyla

int main()
{
    float yaricap, cap, cevre, alan;
    
    
    printf("Çemberin/Dairenin yarıçapını giriniz: ");
    scanf("%f", &yaricap);

    cap = 2 * yaricap;
    cevre = 2 * M_PI * yaricap;
    alan = M_PI * (yaricap * yaricap);

  
    printf("Çemberin çapı = %.2f birimdir \n", cap);
    printf("Çemberin çevresi = %.2f birimdir \n", cevre);
    printf("Dairenin alanı = %.2f birim karedir ", alan);

    return 0;
}
