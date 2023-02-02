#include<stdio.h>

int main(){

    int a[10];
    int min,max;
    
    for(int i=0; i<10 ; i++){
        printf("Enter Number[%d]:",i+1);
        scanf("%d",&a[i]);

        if(i == 0){
            min= max = a[i];
        }else{

            if(min > a[i]){
                min = a[i];
            }
            if(max < a[i]){
                max=a[i];
            }
        }

    }
    printf("Maximum is %d\n",max);
    printf("Minimum is %d",min);


    return 0;
}