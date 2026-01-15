/*Problem:Write a program that takes two integers as input and tells whether first one is a factor of the second one*/
#include<stdio.h>

int main(){

  int num1,num2;
   
   printf("Enter the First Number:");
   scanf("%d",&num1);
   printf("Enter the Second Number:");
   scanf("%d",&num2);
if(num1==0){
     printf("Zero cannot be a factor of Any Number");
}
else if(num2%num1==0){
     printf("%d is a factor of %d",num1,num2);
 }
else{
     printf("%d is not a factor of %d",num1,num2);
}
    return 0;
}//Be patient,Sometimes the wait is longer because the blessing is Bigger
