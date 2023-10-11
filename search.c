#include <stdio.h>
void main(){
	int arr[] = {1,2,3,4,5,6,7,8,9} ;
	int num ; 
	printf("Enter a number to search : \n") ;
	scanf("%d" , &num) ; 
	int length = 0;
	for(int i=0; arr[i] != '\0'; i++){
        	length++;
    	} 
	
	for(int i = 0 ; i < length ; i++){
		if(num == arr[i]){
			printf("Number found at %d \n" , i) ; 
		}
	}  
	
}
