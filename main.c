#include <stdio.h>
void main(){
	int  num ; 
	printf("Enter a number : \n") ;
	scanf("%d" , &num) ;
	int i = 0 ; 
	int factorial = 1 ; 
	for(i = 1 ; i <= num  ; i++){
		factorial = factorial * i ; 
	}  
	printf("factorial = %d \n" , factorial) ; 
}
