////ab兩正整數中整除3的所有數加總
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int a,b,sum=0,i,big,small;
    scanf("%d %d\n",&a,&b);
    big=a>b?a:b;
    small=a<b?a:b;
    for(i=small;i<=big;i++){
        if(i%3!=0){
            continue;
        }
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
