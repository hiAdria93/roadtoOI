//預期結果
#include <stdio.h>
#include <stdlib.h>
void func1(void);
void func2(int);
int x=0;

int main(int argc,const char * argv[]){
  int x=0;
  func1();
  func2(x);
  printf("%d\n",x);
  return 0;
}

void func1(void){
  static int x=0;
  x++;
  printf("%d\n",++x);
}

void func2(int x){
  x++;
  printf("%d\n",x);
}
