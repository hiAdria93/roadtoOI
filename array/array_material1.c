//學生成績系統
#include <stdio.h>
#include <stdlib.h>


int main(int argc,const char * argv[]){
  int score[10],i,sum=0;
  for(i=0;i<10;i++){
    scanf("%d\n",&score[i]);
    sum=sum+score[i];
  }
  printf("sum %d avg %d",sum,sum/10);
  return 0;
}
