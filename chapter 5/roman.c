#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


int main(){
  int n;
  printf("Enter Year: ");
  scanf("%d",&n);
  int arr[] = {1000,500,100,50,10,5,1};
  char str[] = {'m','d','c','l','x','v','i'};
  int len = sizeof(arr)/4;
  for(int i=0;i<len;i++){
    int control = n/arr[i];
    for(int j=0;j<control;j++){
        printf("%c",str[i]);
        n = n - arr[i];
    }

  }
  return 0;
}
