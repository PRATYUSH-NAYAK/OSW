#include <stdio.h>

void reverse(int num){
    int temp = num ; 
    int rev = 0 ; 
    while(temp > 0){
        rev = (rev * 10) + (temp % 10) ;
        temp = temp / 10 ; 
    }
    printf("Reverse of the %d is %d \n " , num,rev) ; 
}

void main(){
    int num ; 
    printf("Enter a number to find its reverse : \n") ;
    scanf("%d" , &num) ; 
    reverse(num) ; 
}
