#include <stdio.h>
void main(){
	char str1[20] ; 
	printf("Enter a string : \n") ; 
	scanf("%s" , str1) ; 
	char str2[20] ; 
	int length = 0 ; 
	for(int i = 0 , str1[i] != '\0' ; i++){
		length ++ ; 
	}	
	
	for(int i = 0 ; i < length ; i++){
		str2[i] = str1[i] ; 
	}
	
	printf("The copied string : %s \n" , str2) ; 
	
}
