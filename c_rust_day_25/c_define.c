#include<stdio.h>
#define PI 3.14
#define add(x,y) (x+y)

int
main() {

	printf("%.2f\n", PI);
    // add(x,y) is replaced with (x+y)
    // So, `printf` looks like printf("%d", (1+2));
    printf("%d\n", add(1,2));
}
