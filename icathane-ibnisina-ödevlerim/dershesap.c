#include <stdio.h>

int main() {
   
    char islem;             
    float sayi1, sayi2;      
    float sonuc;  

 printf("Birinci sayiyi girin: ");
    scanf("%f", &sayi1);

    printf("Yapmak istediğiniz işlemi seçin (+, -, *, /,): ");
    scanf(" %c", &islem);

    printf("İkinci sayiyi girin: ");
    scanf("%f", &sayi2);
if(islem =='+'){
    sonuc = sayi1+sayi2;
    printf("sonuc:%f\n",sonuc);
}
else if(islem =='-'){
    sonuc = sayi1-sayi2;
    printf("sonuc:%f\n",sonuc);
}
else if(islem =='*'){
    sonuc = sayi1*sayi2;
     printf("sonuc:%f\n",sonuc);
}
else if(islem =='/'){

if (sayi2 != 0) {
     sonuc = sayi1 / sayi2;
     printf("Sonuç: %f\n", sonuc);
      } else {
     printf("Hata: Sifira bölme yapilamaz.\n");
        }

}

}


