#include <stdio.h>
void main(){
	int arr[] = {98,67,54,67,12,3,423,444,5,2,5,33,4985,567899} ;
	int length = 0 ;
	for(int i=0; arr[i] != '\0'; i++){
        	length++;
    	} 
	int min = arr[0] ;
	for(int i = 0 ; i < length ; i++){
		if(min > arr[i]){
			min = arr[i] ; 
		}
	}  
	printf("Minimum element in the array = %d \n" , min) ; 
}
