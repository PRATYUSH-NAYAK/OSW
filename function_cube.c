#include <stdio.h>

void cube(){
    int num ; 
    printf("Enter a number : \n") ; 
    scanf("%d" , &num) ; 
    int result = num * num * num;
    printf("Cube of %d is %d \n",num , result) ;  
}

void main(){
    cube() ; 
}
