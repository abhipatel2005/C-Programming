#include<stdio.h>

int fact(int n);

int main(){
    
    int n;

    printf("Enter Value of n: ");
    scanf("%d",&n);

    printf("Factorial is: %d",fact(n));
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int factN1 = fact(n-1);
    int factN = factN1 * n;
    return factN;
}