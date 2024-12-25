#include <stdio.h>

enum Seviyeler 
{
  DUSUK,
  ORTA,
  YUKSEK
};
  
int main() 
{
  enum Seviyeler OdaSicakliği = ORTA;
  printf("%d", OdaSicakliği);
  
  return 0;
}