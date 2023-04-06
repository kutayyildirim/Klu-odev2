#include <stdio.h>
#include <string.h>
// 2. Soru Palindrom Baðlý Liste
int main() {
    // Kelimeyi kullanýcýdan almak için bir karakter dizisi tanýmladým
    char kelime[100];
    printf("Kelimeyi giriniz: ");
    scanf("%s", kelime);
    
    // Kelimenin uzunluðunu hesaplamak için strlen() fonksiyonunu kullandým
    int uzun = strlen(kelime);
    
    // Kelimeyi kontrol etmek için iki adet sayaç deðiþkeni tanýmladým
    int i, j;
    
    // Kelimenin ilk ve son karakterlerini karþýlaþtýrmak için bir döngü kullandým
    for (i = 0, j = uzun - 1; i < uzun / 2; i++, j--) {
        // Eðer kelimenin karþýlýklý karakterleri eþleþmiyorsa, kelime bir palindrom deðildir
        if (kelime[i] != kelime[j]) {
            printf("Kelime bir palindrom degildir.\n");
            return 0;
        }
    }
    // Eðer kelimenin tüm karþýlýklý karakterleri eþleþiyorsa, kelime bir palindromdur
    printf("Kelime bir palindromdur.\n");
    return 0;
}

