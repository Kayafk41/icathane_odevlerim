#include <stdio.h>

int main(){
int sonuc;
int sayi1;
int sayi2;

printf("sayi1 giriniz:");
scanf("%d",&sayi1);
printf("sayi2 giriniz:");
scanf("%d",&sayi2);
sonuc = sayi1-sayi2;
printf("sonuc:%d\n",sonuc);

sonuc = sayi1*sayi2;
printf("sonuc:%d\n",sonuc);

sonuc = sayi1/sayi2;
printf("sonuc:%d\n",sonuc);

sonuc = sayi1+sayi2;
printf("sonuc:%d\n",sonuc);

sonuc = sayi1%sayi2;
printf("sonuc:%d\n",sonuc);

}