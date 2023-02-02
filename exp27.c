#include<stdio.h>

int fact(int n);
int main(){

    int n;
    float sum=0;
    int fact;

    printf("enter value Of n : ");
    scanf("%d",&n);

    for(int i=1; i<=n;i++){
        fact =1;
        for(int j=i;j>0;j--){

            fact = fact * j;
        }
        sum = sum + (1.0/fact);
    }
printf("Sum of Series is :%d",sum);
    return 0;
} 