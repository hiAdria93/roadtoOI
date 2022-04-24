//extern register static const ##1
//register
//speed up loop 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    register int a;
    for(a=0;a<100000;a++){
        printf("%d\n",a);
    }
    printf("Hello, World!\n");
    return 0;
}
