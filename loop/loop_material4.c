//找lcm lcf
#include <stdio.h>
#include <stdlib.h>
int lcm(int,int);
int lcf(int,int);

int main(int argc, const char * argv[]) {
    int a, b;
    scanf("%d %d \n",&a,&b);
    printf("%d \n %d \n",lcm(a,b),lcf(a,b));
    return 0;
}

int lcm(int a, int b){
    int big,i,lc;
    big=a>b?a:b;
    i=big;
    while(1){
        if(!(i%a)&&!(i%b)){
            lc=i;
            break;
        }
        i++;
    }
    return lc;
}

int lcf(int a,int b){
    int lf=1,small,i;
    small=a<b?a:b;
    for(i=1;i<=small;i++){
        if(!(a%i)&&!(b%i)){
            lf=i;
        }
    }
    return lf;
}
