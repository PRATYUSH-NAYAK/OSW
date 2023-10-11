#include <stdio.h>
void main(){
	char string [] = "Pratyush Nayak" ; 
	int length = 0 ; 
	for(int i = 0 ; string[i] != '\0' ; i++){
		length ++ ; 
	}
	
	for(int j = length - 1 ; j >= 0 ; j --){
		printf("%c" , string[j]) ; 
	}
	printf("\n") ; 
}
