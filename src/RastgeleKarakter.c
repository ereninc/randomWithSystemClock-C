#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include "RastgeleKarakter.h"
#include "Random.h"

/**
*
* @author Erencan İNANCI - erencan_inanci@hotmail.com / b171210308@sakarya.edu.tr
* @since 12.04.2019 / 13:54:34
* <p>
* Rastgelelik kavramının sistem saatine göre oluşturulduğu ve metotların bulunduğu C programı.
* </p>
*/

//karakter dizisinden rastgele eleman çağırmayı tercih ettim.
char karakterler[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
                      'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


//rastgele karakteri çağırmamızı sağlayan metot.
int rastgeleUretilen;
char rastgeleKarakterUret(){
    char karakter;
    rastgeleUretilen = (rastgeleDegerUret()%53);
    karakter = karakterler[rastgeleUretilen]; 
    Sleep(1);
    return karakter;
}

//girilen parametre değeri kadar rastgele karakter üreten metot.
char nTaneRandom(int sayi){
    char s[sayi];
    for (int i = 0; i < sayi; i++) {
        rastgeleUretilen = rastgeleKarakterUret();
        s[i] = rastgeleUretilen;
        printf("%c",s[i]);
    }
}

//girilen 5 adet karakter içinden rastgele karakter veren metot.
char verilenKarakterlerden(int karakter1, int karakter2, int karakter3, int karakter4, int karakter5){
    while(1){
        rastgeleUretilen = rastgeleKarakterUret();
        if((rastgeleUretilen == karakter1) || (rastgeleUretilen == karakter2) || (rastgeleUretilen == karakter3) || (rastgeleUretilen == karakter4) || (rastgeleUretilen == karakter5))
            break;
    }
    return (char) rastgeleUretilen; 
}

//girilen 5 karakter içinden 2 adet rastgele karakter veren fonksiyon.
char verilenKarakterlerdenIki(int karakter1, int karakter2, int karakter3, int karakter4, int karakter5){
    char ikiKarakter[2];
    rastgeleUretilen = verilenKarakterlerden( karakter1,  karakter2,  karakter3,  karakter4,  karakter5);
    for(int i = 0; i <= 1; i++){
        while(1){
            rastgeleUretilen = verilenKarakterlerden( karakter1,  karakter2,  karakter3,  karakter4,  karakter5);
            if((rastgeleUretilen == karakter1) || (rastgeleUretilen == karakter2) || (rastgeleUretilen == karakter3) || (rastgeleUretilen == karakter4) || (rastgeleUretilen == karakter5))

                ikiKarakter[i] = rastgeleUretilen;
                break;
        }
        printf("%c",ikiKarakter[i]);
    }
}

//belirtilen 2 karakter aralığından rastgele herhangi bir karakter çağıran fonksiyon.
char verilenIkiKarakter(int karakter1, int karakter2) {
    while(1){
        rastgeleUretilen = rastgeleKarakterUret();
        if((rastgeleUretilen >= karakter1) && (rastgeleUretilen <= karakter2))
            break;
    }
    return (char) rastgeleUretilen; 
}

//rastgele karakter uzunluklu cümle oluşturan metot.
char cumleOlustur(int boslukAdedi){
    int karakterUzunluk;
    while (1)
    {
        karakterUzunluk = rastgeleDegerUret()%97;
        if (karakterUzunluk >= 15)
        {
            break;
        }
    }

    char cumle[karakterUzunluk];
    for (int i = 0; i < karakterUzunluk; i++)
    {
        Sleep(3);
        cumle[i] = rastgeleKarakterUret();
    }

    int boslukYerleri[boslukAdedi];
    for (int i = 0; i < boslukAdedi; i++)
    {
        boslukYerleri[i] = (rastgeleDegerUret()%karakterUzunluk);
    } 

    int cumleUzunluk = sizeof(cumle);
    while (boslukAdedi != 0)
    {
        for (int j = 0; j < cumleUzunluk; j++)
        {
            if (boslukAdedi != 0)
            {
                cumle[boslukYerleri[j]] = ' ';
                boslukAdedi--;
            }
        }
    }
    printf("Rastgele cumle : ");
    printf("%s",cumle);
}