/*Problem:Write a program that takes a number as input and displays "YES" if the input number is a multiple of 3,and has 5 in unit's place e.g 15.75.*/ 

#include<stdio.h>

int main(){
  
  int num;
   printf("Enter any Number:");
   scanf("%d",&num);

  if(num%3==0 && num%10==5){
    printf("YES");
  }
  else{
    printf("The number does not satisfy the given condition");
  }

  return 0;
}
//jokes and anger are sometimes just covers for hurt
