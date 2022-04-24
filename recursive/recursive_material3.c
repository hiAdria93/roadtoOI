#include <stdio.h>
#include <stdlib.h>
int combine(int,int);
int factorial(int);

int main(int argc, const char * argv[]){
  int a,b,c;
  char ch;
  scanf("%d %c %d \n",&a,&ch,&b);
  switch(ch){
    case 'c'||'C':
      printf("%d",combine(a,b));
      break;
    case 'p'||'P':
      printf("%d",combine(a,b)*factorial(b));
      break;
    case 'h'||'H':
      printf("%d",combine(a+b-1,b-1));
      break;
    default:
      printf("syntax error");
      break;
  }
  return 0;
}

int factorial(int a){
  if(a=1){
    return 1;
  }
  return a*factorial(a-1);
}

int combine(int a, int b){
  if(a==1&&b==1){
    return 1;
  }
  if(a==2&&b==1){
    return 2;
  }
  if(a<b||b<0){
    return -1;
  }
  if(a==b||b==0){
    return 1;
  }
  return combine(a-1,b)+combine(a-1,b-1);
}
