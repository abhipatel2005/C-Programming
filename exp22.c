#include<stdio.h>

int main(){

    int marks,sum=0;
    float avg;

    for(int i=0; i<5 ; i++){
        printf("Enter Marks Of students %d :\n",i+1);
        
        for(int i=0;i<3;i++){
            printf("Enter Marks For Subject %d :",i+1);
            scanf("%d",&marks);

            sum = sum + marks;
            avg = sum/3;
        }

            printf("For student %d\n",i+1);
            printf("Sum Of Marks is :%d\n",sum);
            printf("Average Of Marks is :%f\n",avg);
    }
    printf("Thank You");
}