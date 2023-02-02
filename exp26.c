#include<stdio.h>

// Evaluate Series OF Given Function

int main(){

    int n;
    float sum=0;

    printf("Enter No Of Terms :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        sum = sum + (1.0/i);
    }

    printf("Answer is: %f",sum);
}