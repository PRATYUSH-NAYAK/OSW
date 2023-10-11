#include <stdio.h>
void main(){
	char str[5] ; 
	
	printf("Enter the String : \n") ; 
	scanf("%s" , str) ; 
	int length = 0 ; 
	for(int i = 0 ; str[i] != '\0' ; i++){
		length ++ ; 
	}
	
	int j = length ; 
	int palindrome = 0 ; 
	for(int i = 0 ; i < length ++ ; i++){
		while(i < j){
			if(str[i] == str[j]){
				palindrome ++ ; 
			}
			j -- ; 
		}
	}
	
	if(palindrome > 0){
		printf("String is palindrome .\n") ; 
	}
	else{
		printf("String is not palindrome . \n") ; 
	}
}
