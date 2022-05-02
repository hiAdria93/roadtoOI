//終極密碼
#include<stdio.h>
#include<stdlib.h>
srand(time(NULL));

int main(int argc, const char*argv[]){
  int i,guess,big=1000,small=1,rm=rand()%1000;
  printf("%d ~ %d\n",small,big);
  for(i=1;i<=10;i++){
    if(big!=rm&&small!=rm){
      scanf("%d\n",&guess);
      if(guess<rm){
        small=guess;
      }
      else if(guess>rm){
        big=guess;
      }
      else{
        big=guess;
        small=guess;
      }
    }
    if(big==rm||small==rm){
      printf("within %d, sol: %d",i,rm);
      return 0;
    }
    printf("%d remaining\n",10-i);
    printf("%d ~ %d\n",small,big);
  }
  if(big!=rm&&small!=rm){
    printf("sol is %d, your last guess is %d",rm,guess);
  }
  return 0;
}
