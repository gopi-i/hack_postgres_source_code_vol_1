#include<stdio.h>

int sum(int a, int b); // function prototype

int
main() {

  int a = 10, b = 20, s;

  s  = sum(a,b);
  
  printf("%d", s);
  
  return 0;
}

int sum(int a, int b) {

	return a+b; // returning a value from function
    
}
