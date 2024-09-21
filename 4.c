#include<stdio.h>
int main(){
    int a,b,temp;
    a=10;
    b=20;
    printf("Before swapping a=%d b=%d",a,b);

    temp =a;
    a=b;
    b=temp;

    printf("\nAfter swapping a=%d b=%d",a,b);
    
    
    return 0;
}