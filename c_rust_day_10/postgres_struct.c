#include<stdio.h>

/*
* Structs are custom data types created out of primitive types in
* most of the cases. 
* Struct members are accessed with `.` operator
* Structs are generally intialized out of the main function.
* Structs follow camelcase convention for their names.
*/

struct Employee {
    int emp_id;
    char  emp_name[64];    
};
    
int
main() {

    struct Employee emp_1 = {101, "John"};
    
    printf("%d and %s\n", emp_1.emp_id, emp_1.emp_name);
    
    return 0;
    
}
