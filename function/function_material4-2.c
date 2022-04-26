//終極密碼 無限制猜答案
#include<stdio.h>
#include<stdlib.h>
srand(time(NULL));

int main(int argc, const char*argv[]){
  int i,guess,big=1000,small=1,rm=rand()%1000;
  printf("%d ~ %d\n",small,big);
  while(1){
    if(big!=rm&&small!=rm){
      printf("guess %d~%d",small,big);
      scanf("%d \n",&guess);
      if(guess<rm){
        small=guess;
        continue;
      }
      if(guess>rm){
        big=guess;
        continue;
      }
    }
    if(big==rm||small==rm){
      break;
    }
  }
  printf("guess %d is correct",rm);
  return 0;
}
