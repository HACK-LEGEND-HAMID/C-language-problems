/*Problem:Write a C program to check whether a given number is positive or negative.
Test Data : 15
Expected Output :
15 is a positive number
*/
#include<stdio.h>

int main(){

  int num;
  printf("Enter the Number:");
  scanf("%d",&num);
  if(num<0){
    printf("%d is a Negative Number",num);
  }
  else if(num==0){
    printf("Zer0\n");
  }
  else{
    printf("%d is a Postive Number",num);
  }
    return 0;
}
//A beautiful dress can change the personality but beautiful behaviour can change the life
