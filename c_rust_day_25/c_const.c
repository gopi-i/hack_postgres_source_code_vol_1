#include<stdio.h>

int
main() {

	/*
    * Any reassignment of PI after this line
    * results in an error
    */
    
	const float PI = 3.14; 
    
    printf("%.2f\n", PI);
}
