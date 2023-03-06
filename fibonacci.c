#include<stdio.h>

int fib(int n);

int main(){

    int n;
    int a = 0, b = 1,c;

    printf("Enter Value Of n: ");
    scanf("%d",&n);

    if(n>0){
        printf("%d ",a);
        printf("%d ",b);
    }
    for(int i=1;i<n;i++){
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
    return 0;
}