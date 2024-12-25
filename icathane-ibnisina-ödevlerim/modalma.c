#include<stdio.h>
int main (){
int sayi = 0;

while(++sayi <= 100){

if(sayi % 3==0 )
printf("fizz");
if(sayi % 5==0)
printf("buzz");
else if(sayi % 3 !=0 || sayi % 5 !=0)

printf("\n%d",sayi);


printf("\n");
}




}