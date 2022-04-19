//單數加總，從1加到99
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int i,sum=0;
    for(i=1;i<100;i++){
        if(i%2==1){
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
