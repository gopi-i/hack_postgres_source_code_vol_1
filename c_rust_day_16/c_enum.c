#include<stdio.h>

/*
* Enum type creation for two weeks - Sunday and Monday.
* We mapped `0` to the enum value `Sunday`. Here, enum value `Sunday` 
* is not string. It is just label/value used in enum type.
* As Monday is not assigned with any integer value, Compiler checks 
* previou enum value's integer and map to `Monday' by incrementing it * to 1. So, Monday value will be 1.
*/
enum Days { Sunday = 0, Monday };

int
main() {

	/*
    * Declaring a variable with enum type `enum Days` with the
    * identifier `day'.
    */
	enum Days day;
    
    /*
    * Adding a value to enum variable `day`
    * `Sunday` is not string but a allowed enum value to be assigned 
    *  to `day` enum variable.
    */
    day = Sunday;
    
    /*
    * Compiler takes value in `day` variable i.e., Sunday.
    * Sunday corresponds to `0` in defined enum type. So, compiler
    * converts enum value to integer values and compares like `0 == 0`
    */
    if (day == Sunday) {
    	printf("It's Sunday!");
      }
      
 }
