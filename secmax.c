#include <stdio.h>
void main(){
	int i ;  
	int arr[] = {1,2,3,4,5,6,7,8,9} ; 
	int max = arr[0] ; 
	int secmax = arr[0] ; 
	int length = 0;
	for(i=0; arr[i] != '\0'; i++){
        	length++;
    	} 
	for(int i = 0 ; i <= length ; i ++){
		if(arr[i] > max){
			secmax = max ; 
			max = arr[i] ; 
		}
	}
	printf("Second max in array = %d \n" , secmax) ; 
}
