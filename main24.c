#include <stdio.h>
#include <string.h>
// 2. Soru Palindrom Ba�l� Liste
int main() {
    // Kelimeyi kullan�c�dan almak i�in bir karakter dizisi tan�mlad�m
    char kelime[100];
    printf("Kelimeyi giriniz: ");
    scanf("%s", kelime);
    
    // Kelimenin uzunlu�unu hesaplamak i�in strlen() fonksiyonunu kulland�m
    int uzun = strlen(kelime);
    
    // Kelimeyi kontrol etmek i�in iki adet saya� de�i�keni tan�mlad�m
    int i, j;
    
    // Kelimenin ilk ve son karakterlerini kar��la�t�rmak i�in bir d�ng� kulland�m
    for (i = 0, j = uzun - 1; i < uzun / 2; i++, j--) {
        // E�er kelimenin kar��l�kl� karakterleri e�le�miyorsa, kelime bir palindrom de�ildir
        if (kelime[i] != kelime[j]) {
            printf("Kelime bir palindrom degildir.\n");
            return 0;
        }
    }
    // E�er kelimenin t�m kar��l�kl� karakterleri e�le�iyorsa, kelime bir palindromdur
    printf("Kelime bir palindromdur.\n");
    return 0;
}

