//河內塔算最佳步數
#include <stdio.h>
#include <stdlib.h>
int hanoi(int);

int main(int argc, const char* argv[]){
  int a;
  scanf("%d\n",&a);
  printf("%d",hanoi(a));
  return 0;
}

int hanoi(int a){
  if(a==1)return 1;
  if(a==2)return 3;
  return 2*hanoi(a-1)+1;
}
