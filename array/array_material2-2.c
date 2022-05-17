#include <stdio.h>
#include <stdlib.h>
float time(float,int);
void cal(float);

int main(int argc, const char*argv[]){
  float n;
  scanf("%f\n",&n);
  cal(n);
  return 0;
}
void cal(float n){
  float a[5],polysum=0;
  int i;
  for(i=0;i<5;i++){
    printf("第%d次項係數",i);
    scanf("%f",&a[i]);
    polysum=polysum+time(n,i)*a[i];
  }
  printf("%f",polysum);
}
float time(float a, int b){//a^b
  int i;
  float call=1;
  if(b==0){
    return 1;
  }
  for(i=0,i<=b;i++){
    call=call*a;
  }
  return call;
}
