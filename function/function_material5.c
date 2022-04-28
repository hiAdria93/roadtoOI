//河内塔加强版
#include <stdio.h>
#include <stdlib.h>
void heneita(char,char,char,int);

int main(int argc, const char*argv[]){
  int a;
  scanf("how many plates are there? %d \n",&a);
  heneita('A','B','C',a);
  return 0;
}

void heneita(char a, char b, char c, int m){
  
