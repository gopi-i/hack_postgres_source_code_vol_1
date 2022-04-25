#include<stdio.h>

// struct-line-1
struct emp {
    char is_terminated;
    char is_active;
    int id;
};

int main() {
	
    // main-line-1
	struct emp john =  { .id = 1, .is_active = 'Y', .is_terminated = 'N'};
    
    // main-line-2
    printf("%lu", sizeof(john));
    
}
