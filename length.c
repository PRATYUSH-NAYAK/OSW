#include <stdio.h>
void main(){
	char string[] = "Pratyush Nayak" ; 
	int length  = 0 ; 
	for(int i = 0 ; string[i] != '\0' ; i++){
		length ++ ; 
	}
	
	printf("Length of the string : %d \n" , length) ; 
}
