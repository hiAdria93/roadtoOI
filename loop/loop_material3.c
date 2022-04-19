//ab兩正整數中整除3的所有數加總
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int big,small,a,b,i,sum=0;
    scanf("%d %d \n",&a,&b);
    big=a>b?a:b;
    small=a<b?a:b;
    for(i=small;i<=big;i++){
        
        if(!(i%3)){
            sum=sum+i;
        }
    }
    
    printf("%d\n",sum);
    return 0;
}
