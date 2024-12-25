#include <stdio.h>

int main() {
    char islem;              // İşlem tipi: +, -, *, 
    float sayi1, sayi2;      // İşlemlerde kullanılacak iki sayı
    float sonuc;             // İşlem sonucu

    // Kullanıcıdan ilk sayıyı, işlemi ve ikinci sayıyı girmesini iste
    printf("Birinci sayıyı girin: ");
    scanf("%f", &sayi1);

    printf("Yapmak istediğiniz işlemi seçin (+, -, *, /,): ");
    scanf(" %c", &islem);

    printf("İkinci sayıyı girin: ");
    scanf("%f", &sayi2);

    // İşleme göre hesaplama yap
    if (islem == '+') {
        sonuc = sayi1 + sayi2;
        printf("Sonuç: %.2f\n", sonuc);
    } else if (islem == '-') {
        sonuc = sayi1 - sayi2;
        printf("Sonuç: %.2f\n", sonuc);
    } else if (islem == '*') {
        sonuc = sayi1 * sayi2;
        printf("Sonuç: %.2f\n", sonuc);
    } else if (islem == '/') {
        // Bölme işleminde ikinci sayının sıfır olmamasını kontrol et
        if (sayi2 != 0) {
            sonuc = sayi1 / sayi2;
            printf("Sonuç: %.2f\n", sonuc);
        } else {
            printf("Hata: Sıfıra bölme yapılamaz.\n");
        }
    } else {
        printf("Hata: Geçersiz işlem.\n");
    }

   








}
