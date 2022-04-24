//正整數階乘 遞迴關係式
#include <stdio.h>
#include <stdlib.h>
int factorial(int);

int main(int argc, const char * argv[]){
  int n;
  scanf("%d",&n);
  printf("%d",factorial(n));
  return 0;
}

int factorial(register int a){
  if(a==1)return 1;
  return a*factorial(a-1);
}
