#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "search.h"

void kucukHarfYap(char *yazi) {
    for (int i = 0; yazi[i] != '\0'; i++) {
        yazi[i] = tolower(yazi[i]);
    }
}

void searchWordInFile(const char *dosyaAdi, const char *aranan) {
    FILE *dosya = fopen(dosyaAdi, "r");
    
    if (dosya == NULL) {
        printf("Hata: %s dosyasi acilamadi!\n", dosyaAdi);
        return; 
    }

    char kucukAranan[256];
    strcpy(kucukAranan, aranan);
    kucukHarfYap(kucukAranan);

    char okunanSatir[1024];       
    char kucukSatir[1024];  
    
    int kacKereGecti = 0;
    int suAnkiSatir = 1;
    
    int gecenSatirlar[1000];
    int listeyeEklenenSayisi = 0;

    while (fgets(okunanSatir, sizeof(okunanSatir), dosya) != NULL) {
        
        strcpy(kucukSatir, okunanSatir);
        kucukHarfYap(kucukSatir);

        char *bulunanYer = kucukSatir;
        int buSatirdaVar = 0;

        while ((bulunanYer = strstr(bulunanYer, kucukAranan)) != NULL) {
            kacKereGecti++;
            buSatirdaVar = 1;
            bulunanYer = bulunanYer + strlen(kucukAranan); 
        }

        if (buSatirdaVar == 1 && listeyeEklenenSayisi < 1000) {
            gecenSatirlar[listeyeEklenenSayisi] = suAnkiSatir;
            listeyeEklenenSayisi++;
        }

        suAnkiSatir++;
    }

    fclose(dosya);

    printf("\nKelime toplam %d kez bulundu.\n", kacKereGecti);
    
    if (kacKereGecti > 0) {
        printf("\nKelimenin gectigi satirlar:\n");
        for (int i = 0; i < listeyeEklenenSayisi; i++) {
            printf("%d\n", gecenSatirlar[i]);
        }
    }
}
