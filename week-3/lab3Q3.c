#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Kullanici tarafindan girilen bir x sayisinin n tane
a�ilimini g�steren, asagidaki serinin kodunu yaziniz.
x - x^3 + x^5 - ......

�rnek:
� X=3
� N=4
� Toplam= -1968 
*/

int main() {
  int x, n, i;
  int sonBas, sayiGecici, us = 0;
  int ustoplam = 1, toplam = 0, ushesap;
  int isaret = -1;
  printf("Sayi giriniz:");
  scanf("%d", & x);
  printf("N Giriniz:");
  scanf("%d", & n);
  sayiGecici = x;
  toplam = x;

  for (i = 1; i < n; i++) {
    us = 2 * i + 1; //us derecesi
    ushesap = pow(x, us); //sayinin ussu hesaplandı
    ustoplam = ushesap * isaret; //sayinin isareti
    isaret *= (-1); //sıradaki isaret
    toplam = toplam + ustoplam; // serinin toplamı
  }
  printf("Toplam:%d", toplam);

  return 0;
}
