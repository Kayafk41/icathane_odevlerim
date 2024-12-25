#include <stdio.h>
#include <stdbool.h>
int main(){

char islem;
int sayi1, sayi2;
int sonuc;
bool flag = true ;
while(flag){
    printf("sayi1 girin:");
    scanf("%d",&sayi1);

    printf("islem girin:");
    scanf(" %c",&islem);

    printf("sayi2 girin:");
    scanf("%d",&sayi2);


    switch (islem)
    {
    case '+':
    sonuc = sayi1 + sayi2;
    printf("sonuc:%d\n",sonuc);
        break;

    case '-':
    sonuc = sayi1 - sayi2;
    printf("sonuc:%d\n",sonuc);
        break;

    case '*':
    sonuc = sayi1 * sayi2;
    printf("sonuc:%d\n",sonuc);
        break;

    case '/':
        if (sayi2 != 0) {
    sonuc = sayi1 / sayi2;
    printf("sonuc:%d\n",sonuc);
        }
        else 
        printf("hatali islem\n");
        break;

    case 'E':
    printf("çikiş yapiliyor\n");
    flag = false ;
        break;
    
    default:
    printf("hatali islem\n");
        break;
    }

   

    }







}