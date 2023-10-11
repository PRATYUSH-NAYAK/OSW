#include<stdio.h>
void main(){
	char name[16] ; 
	for(int i = 0 ; i < 16 ; i ++){
		scanf("%c" , &name[i]) ; 
	}
	printf("\n") ; 
	for(int i = 0 ; i < 16 ; i++){
		printf("%C" , name[i]) ; 
	}
}
