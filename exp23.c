#include<stdio.h>

// Read Height And Weight OF Five Persons

int main(){

    int n,height,weight;
    int count=0;

    for(int i=0;i<5;i++){
        printf("Enter Detail for person %d",i+1);

        printf("Enter Weight For Person %d :\n",i+1);
        scanf("%d",&weight);

        printf("Enter Height for person %d :\n",i+1);
        scanf("%d",&height);

        if(weight<50 && height>170){
            count++;
        }
    }
}