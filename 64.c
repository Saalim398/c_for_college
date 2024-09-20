#include <stdio.h>

int main() {
    int num = 5;    
    int *p;      

    p = &num;     

    printf("Value of num: %d\n", num);           
    printf("Value pointed to by ptr: %d\n", *p); 
    printf("location in memory :%d",p);

   
    return 0;
}
