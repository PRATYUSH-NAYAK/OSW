#include <stdio.h>

int length(int arr[]){
    int result = 0 ;
    for(int i = 0 ; arr[i] != '\0' ; i++){
        result ++ ; 
    } 
    return result ; 
}
void bub_sort(int arr[]){
    int len;
    len = length(arr) ; 
    
    for(int i = 0 ; i < len ; i++){
        for(int j = 0 ; j < len - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j] ; 
                arr[j] = arr[j + 1] ; 
                arr[j + 1] = temp ; 
            }
        }
    }
}

void main(){
    int arr[] = {9,8,7,6,5,4,3,2,1} ;
    bub_sort(arr) ; 
    int len;
    len = length(arr) ;  
    for(int i = 0 ; i < len ; i++){
        printf("%d " , arr[i]) ; 
    }
    printf("\n") ; 
}
