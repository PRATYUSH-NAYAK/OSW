#include <stdio.h>

int square(int num){
    return num*num ; 
}

void main(){
    int num ; 
    printf("Enter a number : \n") ;
    scanf("%d" , &num) ; 
    int result = square(num) ; 
    printf("Square of %d is %d \n" , num , result) ;  
}
