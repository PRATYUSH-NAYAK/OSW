#include <stdio.h>

int maximum(int a , int b){
    int max = 0 ; 
    if(a > b){
        max = a ; 
    }
    else if(a < b){
        max = b ;    
    }
    else{
        printf("Both numbers are equal \n") ; 
        max =  a ; 
    }
return max ; 
}

void main(){
    int a , b ; 
    printf("Enter a number : \n") ; 
    scanf("%d" , &a) ; 
    printf("Enter another number : \n") ; 
    scanf("%d" , &b) ; 
    int max = maximum(a,b) ; 
    printf("Maximum number is : %d \n" , max) ; 
}
