//計算x的n次方
#include <stdio.h>
#include <stdlib.h>
float power(float,int);

int main(int argc, const char * argv[]) {
    int n;
    float x;
    scanf("%f %d \n ",&x,&n);
    printf("%f\n",power(x,n));
    return 0;
}

float power(float x,int n){
    int i;
    float fx=1;
    for(i=0;i<=n;i++){
        fx=fx*x;
    }
    return fx;
}
