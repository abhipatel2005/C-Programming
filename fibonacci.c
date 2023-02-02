#include<stdio.h>

int fib(int n);

int main(){

    int n;

    printf("Enter Value Of n:");
    scanf("%d",&n);

    printf("Fibonacci series is:%d",fib(n));

    return 0;
}

int fib(int n){
    if(n==0){
        return 1;
    }

    int fibN2 = fib(n-2);
    int fibN1 = fib(n-1);
    int fibN = fibN1 + fibN2;
    return fibN;
}