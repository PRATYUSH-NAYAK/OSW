#include <stdio.h>
void main(){
	int arr[] = {1,2,3,4,5,6,7,8,9} ;
	int num ; 
	int new ; 
	printf("Enter a number to search : \n") ;
	scanf("%d" , &num) ; 
	int length = sizeof(arr) / sizeof(arr[0]) ; 
	printf("Enter a number to replace : \n") ;
	scanf("%d" , &new) ; 
	for(int i = 0 ; i < length ; i++){
		if(num == arr[i]){
			arr[i] = new ; 
		}
	}  
	printf("New Array = ") ; 
	for(int i = 0 ; i < length ; i++){
		printf("%d " , arr[i]) ; 
	}
	printf("\n") ; 
	
}
