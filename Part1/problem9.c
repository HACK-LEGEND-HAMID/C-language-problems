/*Problem:
Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three
*/
#include<stdio.h>

int main(){

  int num1,num2,num3;
   printf("Enter the first Number:");
   scanf("%d",&num1);
   printf("Enter the Second Number:");
   scanf("%d",&num2);
   printf("Enter the Third Number:");
   scanf("%d",&num3);
   printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d\n",num1, num2, num3);

 if(num1>num2 && num1>num3){
   printf("The 1rd Number is the Greatest Among Three:%d",num1);
 }
 else if(num2>num1 && num2>num3){
   printf("The 2nd Number is the Greatest Among Three:%d",num2);
 }
 else{
   printf("The 3rd Number is the Greatest Among Three:%d",num3);
 }
    return 0;
}
//Independence is happiness.
