#include <stdio.h>
int main(){

int gunler;
printf("gün giriniz:");
scanf("%d",&gunler);


switch (gunler)
{
case 1: case 6:
   printf("pazartesi");
    break;
    
case 2: case 7:
   printf("sali");
    break;

case 3: case 8:
   printf("carsamba");
    break;

case 4: case 9:
   printf("persembe");
    break;

case 5: case 10:
   printf("cuma");
    break;

default:
   printf("1-5 arasi gun seciniz");
    break;
}




}