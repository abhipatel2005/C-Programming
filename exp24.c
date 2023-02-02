#include<stdio.h>

int main(){

    int n,i;
    printf("Enter Number :");
    scanf("%d",&n);

    for(int i = 2; i<n; i++){

        if( n % i == 0){
            printf("Not Prime");
        }
        if(n == i){
            printf("Prime");
        }
}
}