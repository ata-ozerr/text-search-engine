#include <stdio.h>
#include <string.h>

void searchWordInFile(const char *dosyaAdi, const char *aranan);

int main()
{
    char dosyaAdi[256];
    char kelime[100];

    printf("Dosya adini giriniz: ");
    fgets(dosyaAdi, sizeof(dosyaAdi), stdin);
    dosyaAdi[strcspn(dosyaAdi, "\n")] = '\0';

    printf("Aranacak kelimeyi giriniz: ");
    fgets(kelime, sizeof(kelime), stdin);
    kelime[strcspn(kelime, "\n")] = '\0';

    searchWordInFile(dosyaAdi, kelime);

    return 0;
}
