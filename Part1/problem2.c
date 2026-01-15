//Problem:Write a C program to check whether a given number is even or odd.
#include<stdio.h>

int main(){

    int num;
      
    printf("Enter the Number:");
    scanf("%d",&num);

    if(num%2==0){
        printf("This is an even Number:%d",num);
    }
    else{
      printf("This is an odd Number:%d",num);
    }
    
    return 0;
}
//The winner takes it all, The losser has to fall
