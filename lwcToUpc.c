#include <stdio.h>
void main(){
	int n ; 
	printf("Enter the length of the string : \n") ; 
	scanf("%d" , &n) ; 
	char name[n] ; 
	
	printf("Enter the string : \n") ; 
	scanf("%s" , name) ; 
	
	for(int i = 0 ; name[i] != '\0' ; i++){
		if(name[i] >= 'a' && name[i] <= 'z'){
			name[i] = name[i] - 32 ; 
		}
	}
	printf("String s = %s \n" , name) ; 
	
	
}
