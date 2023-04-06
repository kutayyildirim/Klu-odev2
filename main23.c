#include <stdio.h>
#include <stdlib.h>
 // 1. Soru Eksik Küme Elemanýný Bulma
int main() {
  int n, i, temp;
  printf("Kac adet sayi gireceksiniz? ");
  scanf("%d", &n);
  
  int s[n];
  printf("Sayilari giriniz: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &s[i]);
  }
  
  // Bubble sort ile sýralama iþlemi
  for (i = 0; i < n - 1; i++) {
    int j;
    for (j = 0; j < n - i - 1; j++) {
      if (s[j] > s[j+1]) {
        temp = s[j];
        s[j] = s[j+1];
        s[j+1] = temp;
      }
    }
  }
  
  int kayipSayi, tekrarlananSayi;
  for (i = 0; i < n - 1; i++) {
    if (s[i] == s[i+1]) { // Eþit olan iki sayý bulundu
      tekrarlananSayi = s[i];
      break;
    }
  }
  
  // Kayýp olan sayýyý bulmak için toplamý al ve farký hesapla
  int toplam = (n * (n+1))/2;
  int son = 0;
  for (i = 0; i < n; i++) {
    son += s[i];
  }
  kayipSayi = toplam - son + tekrarlananSayi;
  
  printf("Tekrarlanan sayi: %d\n", tekrarlananSayi);
  printf("Kayip olan sayi: %d\n", kayipSayi);
  
  return 0;
}

