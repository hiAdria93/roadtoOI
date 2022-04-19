//單數加總，從1加到99
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int i=0,sum=0;
    do{
        if(i%2==1){
            sum=sum+i;
        }
        i++;
    }while(i<=99);
    printf("%d",sum);
    return 0;
}
