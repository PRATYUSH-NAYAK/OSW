#include <stdio.h>
void main(){
	int arr [] = {21,34,56,43,23,67,98} ;
	int length  = 0 ; 
    	for(int i=0; arr[i] != '\0'; i++){
        	length++;
    	}
	
	for(int i = 0 ; i < length ; i++){
		printf("%d " , arr[i]) ; 
	} 
	printf("\n") ; 
}
