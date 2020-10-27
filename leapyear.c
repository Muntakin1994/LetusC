#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


int main(){
  int year;
  printf("Enter a Year to Check if Leap Year or Not: ");
  scanf("%d",&year);
  if(year%400==0 || year%4==0 && year%100!= 0){
    printf("%d is leap year\n",year);
  }
  else{
    printf("%d is not a leap year\n",year);
  }
  return 0;
}
