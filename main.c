#include <stdio.h>
#include <string.h>
#include "search.h"

#define MAX_FILENAME 256
#define MAX_WORD 100

int main(void)
{
    char filename[MAX_FILENAME];
    char word[MAX_WORD];
    SearchResult result;
    int status;
    int i;

    printf("Dosya adini giriniz: ");
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        printf("Dosya adi okunurken hata olustu.\n");
        return 1;
    }

    filename[strcspn(filename, "\n")] = '\0';

    if (strlen(filename) == 0) {
        printf("Gecersiz dosya adi.\n");
        return 1;
    }

    printf("Aranacak kelimeyi giriniz: ");
    if (fgets(word, sizeof(word), stdin) == NULL) {
        printf("Kelime okunurken hata olustu.\n");
        return 1;
    }

    word[strcspn(word, "\n")] = '\0';

    if (strlen(word) == 0) {
        printf("Gecersiz kelime.\n");
        return 1;
    }

    status = search_word_in_file(filename, word, &result);

    if (status == -1) {
        printf("Dosya acilamadi: %s\n", filename);
        return 1;
    }

    printf("\n--- Arama Sonuclari ---\n");
    printf("Aranan kelime: %s\n", word);
    printf("Dosya: %s\n", filename);
    printf("Toplam tekrar sayisi: %d\n", result.total_count);

    if (result.line_count > 0) {
        printf("Kelimenin gectigi satir numaralari: ");
        for (i = 0; i < result.line_count; i++) {
            printf("%d", result.line_numbers[i]);
            if (i < result.line_count - 1) {
                printf(", ");
            }
        }
        printf("\n");
    } else {
        printf("Kelime dosyada bulunamadi.\n");
    }

    return 0;
}