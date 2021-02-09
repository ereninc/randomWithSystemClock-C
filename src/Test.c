#include "Random.h"
#include "RastgeleKarakter.h"
#include "Test.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/**
*
* @author Eren
* @since 12.04.2019 / 13:54:34
* <p>
* Test dosyamız.
* </p>
*/

void TestEt()
{
    //fonksiyon işaretçileri kullanılarak adreslerine ulaşıldı ve aşağıda adreslerden çağırıldı.
    ptrFonk1 ptrrastgeleKarakterUret = (&rastgeleKarakterUret);
    ptrFonk2 ptrnTaneRandom = (&nTaneRandom);
    ptrFonk3 ptrverilenKarakterlerden = (&verilenKarakterlerden);
    ptrFonk4 ptrverilenIkiKarakter = (&verilenIkiKarakter);
    ptrFonk5 ptrcumleOlustur = (&cumleOlustur);
    ptrFonk6 ptrVerilenKarakterlerdenIki = (&verilenKarakterlerdenIki);
    printf("\nRastgele karakter : %c", ptrrastgeleKarakterUret());
    int nAdet = 4;
    printf("\n%d Adet Rastgele Karakter : ",nAdet);
    printf("",ptrnTaneRandom(nAdet));
    printf(" ");
    char param1 = 'a';
    char param2 = 'd';
    char param3 = 'g';
    char param4 = 'f';
    char param5 = 'X';
    printf("\nVerilen karakterler icinden rastgele (%c,%c,%c,%c,%c) : %c",param1,param2,param3,param4,param5,ptrverilenKarakterlerden(param1,param2,param3,param4,param5));
    printf(" ");
    char boundary1 = 'a';
    char boundary2 = 'f';
    printf("\nVerilen iki karakter araligindan rastgele (%c, %c) : %c ",boundary1,boundary2, ptrverilenIkiKarakter(boundary1,boundary2));
    printf("\n");
    printf("",ptrcumleOlustur(3));
    printf("\nVerilenlerden iki karakter (%c, %c, %c, %c, %c) : ",param1,param2,param3,param4,param5);
    printf("",ptrVerilenKarakterlerdenIki(param1,param2,param3,param4,param5));
}

void CokluTest()
{
    for (int i = 0; i < 10; i++)
    {
        TestEt();
        printf("\n-------------------------");
    }
}
