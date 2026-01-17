/*5. Voting Eligibility

Problem:Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
Test Data : 21
Expected Output :
Congratulation! You are eligible for casting your vote.*/

#include<stdio.h>

int main(){
   
   int age;
   printf("Enter Your Age:");
   scanf("%d",&age);
   if(age>=18){
       printf("Congratulation! You are Eligible for Casting Your Vote");
   }
   else{
       printf("Your age must be equal to 18 or Greater to Cast Your Vote");
   }

     return 0;
}
//A room without books is like a body without a soul
