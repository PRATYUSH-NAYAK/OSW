#include <stdio.h>
#include <string.h>

void main(){
    char str1[20] = "pratik" ; 
    char str2[20] = "PRATYUSH" ; 
    int length = strlen(str1) ; 
    printf("Length of the string str1 = %d \n" , length) ; 
    char str3[20] ;
    strcpy(str3 , str2) ; 
    printf("Str3 = %s \n" , str3) ; 
    printf("%s \n" , strcat(str2 , str3)) ;   
}

