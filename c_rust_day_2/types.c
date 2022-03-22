#include<stdio.h>
#include<stdbool.h>
int
main() {
     short int si;
     int i;
     long int li;

     float f;
     double d;
     
     char c;

     printf("%lu %lu %lu", sizeof(si), sizeof(i), sizeof(li));
     printf("%lu%lu", sizeof(f), sizeof(d));
     printf("%lu", sizeof(c));
     printf("%lu", sizeof(bool));
}
