#include <stdio.h>
void main(){
	int arr[] = {1,23,34,45,56,67,78,89} ; 
	int length = 0 ;
	for(int i=0; arr[i] != '\0'; i++){
        	length++;
    	} 
	for(int i = length - 1 ; i >= 0 ; i--){
		printf("%d " , arr[i]) ; 
	}
	printf("\n") ; 
}
