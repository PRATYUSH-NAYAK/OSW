#include<stdio.h>
void main(){
	char string1[20] ;
	char string2[20] ; 
	
	printf("Enter the first string : \n") ; 
	scanf("%s" , string1) ; 
	printf("Enter the second string : \n") ; 
	scanf("%s" , string2) ;
	
	int length1 = 0 ; 
	int length2 = 0 ; 
	
	for(int i = 0 ; string1[i] != '\0' ; i++){
		length1 ++ ; 
	} 
	
	for(int i = 0 ; string2[i] != '\0' ; i++){
		length2 ++ ; 
	}
	
	int same = 0 ;
	if(length1 == length2){
		for(int i = 0 ; i < length1 ; i++){
			if(string1[i] == string2[i]){
				same ++ ; 
			}
		}
		
		if(same == length1){
			printf("Both the strings are same . \n") ; 
		}
		else{
			printf("Both the strings are not same . \n") ; 
		}
	}
	else{
		printf("Both the strings are not same .\n") ; 
	}
	
	
}
