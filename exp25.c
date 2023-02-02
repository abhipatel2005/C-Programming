#include<stdio.h>

int main(){

    int n;
    int sum=0;

    printf("Enter Number Of Terms :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        
        sum = sum + (i*i);
    }

    printf("Answer is : %d",sum);

    return 0;
    
}