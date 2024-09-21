#include<stdio.h>
int main(){
    int x;
    printf("Enter the Number: ");
    scanf("%d",&x);

    if(x%2==0){
        printf("The Number is even");

    }
    else{
        printf("The number is odd");
    }
    return 0;

}