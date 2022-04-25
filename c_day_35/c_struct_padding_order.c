#include<stdio.h>

#pragma pack(1)
// struct-line-1
struct emp {

    int id;
    char is_terminated;
    char is_active;

};

int main() {
	
    // main-line-1
	struct emp john =  { .id = 1, .is_active = 'Y', .is_terminated = 'N'};
    
    // main-line-2
    printf("%lu", sizeof(john));
    
}

