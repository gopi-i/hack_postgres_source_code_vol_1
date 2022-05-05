#include <stdio.h>
#include <string.h>
#include <time.h>

int main () {
   struct tm t;

   t.tm_sec    = 0;
   t.tm_min    = 0;
   t.tm_hour   = 12;
   t.tm_mday   = 5;
   t.tm_mon    = 4;
   t.tm_year   = 122;

   puts(asctime(&t));
   
   return(0);
}
