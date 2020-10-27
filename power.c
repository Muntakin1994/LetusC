#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int power(int a, int b){
    return b>0 ?  a*power(a,--b): 1;
}

int main(){
  int a,b;
  printf("enter a: \n");
  scanf("%d",&a);
  printf("enter b: \n");
  scanf("%d",&b);
  printf("%d",power(a,b));
  return 0;
}
