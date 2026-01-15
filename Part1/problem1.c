//Problem:Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>

int main(){
 
  int number1,number2;
  
    printf("Enter First Number:");
    scanf("%d",&number1);
    printf("Enter Second Number:");
    scanf("%d",&number2);
 
    if(number1==number2){
        printf("The First Number is Equal to Second Number:");
    }
    else{
        printf("The First Number is Not Equal to Second Number:");
    }

    return 0;
}
//Knowledge is not about memorizing answer,it's about understanding why the Answer is True 
