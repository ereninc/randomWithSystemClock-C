#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include <windows.h>
#include "Random.h"

/**
*
* @author Eren
* @since 12.04.2019 / 13:54:34
* <p>
* Anlık milisaniyeyi alan fonksiyonumuzun olduğu dosyamız.
* </p>
*/

//anlık milisaniyeyi return eden metot.
int rastgeleDegerUret(){
   SYSTEMTIME st, lt; 
   GetSystemTime(&st);
   GetLocalTime(&lt);
   
   int milisaniye;
   milisaniye = ((int)(lt.wMilliseconds));
   /*int rastgeleUretilenSayi = (milisaniye%53);
   return rastgeleUretilenSayi;*/
   return milisaniye;
}
