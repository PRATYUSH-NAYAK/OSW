#include <stdio.h> 
void main(){
	char s[10] ;
	
	printf("Enter the string : \n") ; 
	scanf("%s" , s) ; 
	int vowels = 0 ;
	printf("Vowels are : \n") ; 
	for(int i = 0 ; s[i] != '\0' ; i++){
		char temp = s[i] ; 
		if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u' ||temp == 'A' || temp == 'E'||temp == 'I' || temp == 'O' || temp == 'U'){
			vowels ++ ; 
			printf("%c " ,temp) ;
		}		 
	}
	printf("\n") ; 
	printf("Number of vowels in the string = %d \n" , vowels) ; 
}
