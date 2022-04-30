#include<stdio.h>

int main() {

	/*
    * Declaring variable.
    * Here, C assigns a randome memory address to p.
    */
	int *p;
    
    // Let's find the random memroy address.
    printf("%p\n", &p);
    
    /*
    * Let's find the data in random memory address by dereferencing.
    */
    printf("%d", *p);
    
   /* Let's assign some value to it.
   * If ranom memory location is not sensitive location,
   * There won't be any issue. But if it points to some 
   * OS operations related memory address,  
   * then there is possibility of wrecking part of OS.
   * I don't want to wreck the OS.. So..
   */
   
   //*p = "Commented to prevent crashing of my Laptop";
   
   return 0;
  
 }
