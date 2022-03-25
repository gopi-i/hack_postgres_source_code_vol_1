#include<stdio.h>

int
main() {
	
    int argc = 1;
    
    // Conditional check using if
    if (argc < 0) {
    	printf("No args are supplied.");
    }
    
    // Conditional if - else
    if (argc < 0) {
    	printf("No args are supplied.");
    } else {
    	printf("Args are supplied.");
    }
   
   // Conditional if - else if - else
    if (argc == 0) {
    	printf("Zero args are supplied.");
    } else if ( argc == 1) {
    	printf(" One arg is supplied.");
    } else {
    	printf("More than one arg is supplied.");
    }
   
   return 0;
   
}
