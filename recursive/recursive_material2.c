//費氏數列第n項 以及列出費氏數列
#include <stdio.h>
#include <stdlib.h>
int feibo(int);

int main(int argc, const char * argv[]){
  int a,i;
  scanf("%d",&a);
  printf("%d\n",feibo(a));
  for(i=1;i<a;i++){
    printf("%d",feibo(i));
  }
  return 0;
}

int feibo(int a){
  if((a==1)||(a==2)){
    return 1;
  }
  return feibo(a-1)+feibo(a-2);
}
