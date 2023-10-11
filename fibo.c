#include <stdio.h>
void main() {
	int n; 
	printf("Enter a number : \n") ;
	scanf("%d" , &n) ;
	int a = 0 ; 
	int b = 1 ; 
	printf("%d %d " , a , b ) ; 
	int fib = a + b ; 
	while(fib <= n){
		printf("%d " , fib) ; 
		a = b ; 
		b = fib ; 
		fib = a + b ; 
	}
	printf("\n") ; 	
}
