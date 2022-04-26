#include<stdio.h>

/*
* `sample_union` union type is created
* with int type and char type members.
* This union gets 4 bytes of memory.
* Size defined by member types in union.
* As int has more size than char,
* int's size is used to calculate union memory size.
*/
union sample_union {
	int emp_id;
    char is_active;
};

int main() {

	// Initialization of union
    // We can only initialize first member of union
    // as per C-89 style using curly braces.
	union sample_union emp = {1};
    emp.is_active = 'A';
    
    printf("%d", emp.emp_id);
    printf("%c", emp.is_active);
}
