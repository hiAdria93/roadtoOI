//正整數階乘 遞迴關係式
//non-recursive
#include <stdio.h>
#include <stdlib.h>
int factorial(int);

int main(int argc, const char * argv[]){
  int n;
  scanf("%d",&n);
  printf("%d",factorial(n));
  return 0;
}

int factorial(int a){
  register int i;
  int fac=1;
  for(i=1;i<+a;i++){
    fac=fac*i
  }
  return fac;
}
