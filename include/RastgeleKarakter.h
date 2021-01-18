#ifndef RASTGELEKARAKTER_H
#define RASTGELEKARAKTER_H

/**
*
* @author Erencan İNANCI - erencan_inanci@hotmail.com / b171210308@sakarya.edu.tr
* @since 12.04.2019 / 13:54:34
* <p>
* Metotları çağırmamızı sağlayan header dosyası.
* </p>
*/

struct RastgeleKarakter{
    
};
typedef struct RastgeleKarakter* Rastgele;


//fonksiyon işaretçileri
typedef char(*ptrFonk1) ();
typedef char(*ptrFonk2) (int sayi);
typedef char(*ptrFonk3) (int karakter1, int karakter2, int karakter3, int karakter4, int karakter5);
typedef char(*ptrFonk4) (int karakter1, int karakter2);
typedef char(*ptrFonk5) (int boslukAdedi);
typedef char(*ptrFonk6) (int karakter1, int karakter2, int karakter3, int karakter4, int karakter5);

char rastgeleKarakterUret();
char nTaneRandom(int sayi);
char verilenKarakterlerden(int karakter1, int karakter2, int karakter3, int karakter4, int karakter5);
char verilenIkiKarakter(int karakter1, int karakter2);
char cumleOlustur(int boslukAdedi);
char verilenKarakterlerdenIki(int karakter1, int karakter2, int karakter3, int karakter4, int karakter5);

#endif