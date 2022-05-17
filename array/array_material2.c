//polynomial of degree 4
//polynomial function 
#include <stdio.h>
#include <stdlib.h>
void func(float);

int main(int argc,const char*argv[]){
  float a;
  scanf("%f\n",&a);
  func(a);
  return 0;
}
void func(float n){
  float a[5];
  int i;
  for(i=0;i<5;i++){
    printf("第%d項係數",i+1);
    scanf("%f\n",&a[i]);
  }
  printf("%f",a[0]*n*n*n*n+a[1]*n*n*n+a[2]*n*n+a[3]*n+a[4]);
}
