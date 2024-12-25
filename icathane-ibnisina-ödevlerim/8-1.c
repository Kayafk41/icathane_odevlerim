#include <stdio.h>

struct PersonelBilgisi {
  int Yas;
  float Maas;
  char Isim[30];
  char Cinsiyet[8];
};

int main() 
{
  struct PersonelBilgisi Personel1;

  strcpy(Personel1.Isim, "Ahmet Ahmetoğlu");
  strcpy(Personel1.Cinsiyet, "Erkek");
  Personel1.Yas = 34;
  Personel1.Maas = 8500;

  printf("Personelin Adı: %s\n", Personel1.Isim);
  printf("Personelin Cinsiyeti: %s\n", Personel1.Cinsiyet);
  printf("Personelin Yaşı: %d\n", Personel1.Yas);
  printf("Personelin Maaşı: %lf\n", Personel1.Maas);

  printf("\n................................\n");

  struct PersonelBilgisi Personel2 = {33, 8800, "Ayşe Ayşeoğlu", "Kadın"};
  
  printf("Personelin Adı: %s\n", Personel2.Isim);
  printf("Personelin Cinsiyeti: %s\n", Personel2.Cinsiyet);
  printf("Personelin Yaşı: %d\n", Personel2.Yas);
  printf("Personelin Maaşı: %lf\n", Personel2.Maas);

  printf("\n................................\n");

  struct PersonelBilgisi Personel2Kopyasi;
  Personel2Kopyasi = Personel2;
  printf("Personelin Adı: %s\n", Personel2Kopyasi.Isim);
  printf("Personelin Cinsiyeti: %s\n", Personel2Kopyasi.Cinsiyet);
  printf("Personelin Yaşı: %d\n", Personel2Kopyasi.Yas);
  printf("Personelin Maaşı: %lf\n", Personel2Kopyasi.Maas);

  return 0;
}