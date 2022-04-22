//找完全數
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int a,i,j,check=0;
    scanf("%d \n ",&a);
    for(i=1;i<=a;i++){//x for fact
        check=0;//initialize
        for(j=1;j<i;j++){//find fact
            if(!(i%j)){
                check=check+j;
            }
        }
        if(check==i){
            printf("%d\n",i);
        }
    }
    return 0;
}
