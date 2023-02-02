#include<stdio.h>

int main(){

    int n;

    printf("Enter Any Integer Number:");
    scanf("%d",&n);

    if((n %10) % 2 == 0){
        printf("last Digit Of Number is Even.");
    }else{
        printf("Last Digit Of Number Is Odd.");
    }
    return 0;
}