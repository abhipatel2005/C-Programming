#include<stdio.h>

//Program to Average nad sum of Given users' Number

int main(){

    int n; int sum = 0;
    float avg;
    int m;
    
    printf("Enter Number How Many Number Do you wan to Enter:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter Numbers [%d]:",i+1);
        scanf("%d",&m);

        sum = sum + m;

        avg = sum/n;
    }

    printf("Average is:%.2f\n",avg);
    printf("Sum is :%d",sum);
    return 0;
}