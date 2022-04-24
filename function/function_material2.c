//簡易四則運算計算器
#include <stdio.h>
#include <stdlib.h>
float p(float,float);
float m(float,float);
float t(float,float);
float d(float,float);

int main(int argc, const char * argv[]) {
    int a,b;
    char mid;
    scanf("%d %c %d \n", &a, &mid, &b);
    switch(mid){
        case '+':
            printf("%f",p(a,b));
            break;
        case '-':
            printf("%f",m(a,b));
            break;
        case 'x':
            printf("%f",t(a,b));
            break;
        case '*':
            printf("%f",t(a,b));
            break;
        case '/':
            printf("%f",d(a,b));
            break;
        default: break;
    }
    return 0;
}

float p(float a,float b){
    return a+b;
}
float m(float a,float b){
    return a-b;
}
float t(float a,float b){
    return a*b;
}
float d(float a,float b){
    return a/b;
}
