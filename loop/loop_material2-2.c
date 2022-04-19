//單數加總，從1加到99
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int i=1,sum=0;
    while((i<100)&&(i%2==1)){
        sum=sum+i;
        i=i+2;
    }
    printf("%d",sum);
    return 0;
}
