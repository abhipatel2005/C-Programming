#include<stdio.h>

//progrm to reverse a Number

int main(){

    int n;
    int rev = 0;

    printf("enter  three digit Number to reverse:");
    scanf("%d",&n);

    while(n>0){
        rev = (rev*10) + (n%10);
        n =n/10;
    }
    
    printf("Reverse Of Number Is:%d",rev);

    return 0;
}