#include<stdio.h>

//Program to Sum Of last and First digit of a number

int main(){

    int n;
    int first;
    printf("Enter Number:");
    scanf("%d",&n);

    printf("last number is : %d\n", (n%10));

        first = n;

        do{ 
            first = (first /10);
        } while (first>=10);

        printf("First digit is:%d\n",first);

        printf("Sum OF First and Last Digit is :%d", ((n%10) + first));
        
        return 0;
}