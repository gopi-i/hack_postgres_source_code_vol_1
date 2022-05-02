#include<stdio.h>

struct sample {
    int data;
    struct sample *link;
};

int main() {

	
    struct sample s1 = {10, NULL};

    struct sample s2 = {20, NULL};
    
    /*
    * We can use pointer in s1 to point to s2 or vice versa.
    */
    
    s1.link = &s2;
    
    /*
    * To access structure elements using a pointer which has 
    * address of that structure.. We need to use arrow notation
    * for simplicity.
    * Current s1 has the member `data` with value - 10 and another
    * member(which is pointer) has address of s2
    * s2 has the member `data` with value - 20 and pointer member 
    * with value NULL
    */
    
    printf("s1 member - data : %d\n", s1.data);
    printf("s1 member - link : %p (address of s2)\n", s1.link);
    
    printf("s2 member - data : %d\n", s2.data);
    printf("s2 member - link : %p\n", s2.link);
    
    // Access s2 members using pointer in s1
    printf("s2 member - data (using s1 pointer) : %d\n", s1.link->data);

    
    return 0;
    
}
