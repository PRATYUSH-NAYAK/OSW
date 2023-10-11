#include <stdio.h>
#define Pi 3.14

float volume(){
    float radius,height ; 
    printf("Enter the radius of the cylinder : \n") ; 
    scanf("%f" , &radius) ; 
    printf("Enter the height of the cylinder : \n") ; 
    scanf("%f" , &height) ; 
    float vol = Pi * (radius * radius) * height ; 
    return vol ; 
}

void main(){
    float result = volume() ; 
    printf("Volume of the cylinder is : %f \n" , result) ; 
}

