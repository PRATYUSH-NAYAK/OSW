#include <stdio.h>
void main(){
	int arr[] = {1,2,3,4,1,2,3,4,1,2,3,4,1,2,1,3,1,4,1,2,1,3,1,4,1,2,1,3,1,4} ; 
	int length = 0 ; 
	for(int i=0; arr[i] != '\0'; i++){
        	length++;
    	}
	int occur = 0 ; 
	int num ; 
	printf("Enter a number to find its number of occurrence : \n") ;
	scanf("%d" , &num) ;
	for(int i = 0 ; i < length ; i++){
		if(num == arr[i]){
			occur = occur + 1 ; 
		}
	}  
	
	if(occur > 0){
		printf("Number of occuurrence = %d \n" , occur) ; 
	}
	else{
		printf("No occurrences found. \n") ; 
	}
}
