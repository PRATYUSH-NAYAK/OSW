#include <stdio.h>
#include <string.h>

struct student{
  int age ; 
  char name[15] ; 
  int marks ; 
}age,name,marks;


int main(){
  struct student s1 ; 
  s1.age = 21 ; 
  s1.marks = 92 ; 
  strcpy(s1.name , "Pratyush Nayak") ; 
  printf("Name = %s \n" , s1.name) ; 
  printf("Age = %d \n" ,s1.age) ;
  printf("Marks = %d \n" , s1.marks) ;  
  printf("\n") ; 
  struct student s2 ; 
  s2.age = 20 ; 
  s2.marks = 9 ; 
  strcpy(s2.name , "Nandu G") ; 
  printf("Name = %s \n" , s2.name) ; 
  printf("Age = %d \n" ,s2.age) ;
  printf("Marks = %d \n" , s2.marks) ; 
  printf("\n") ; 
  struct student s3 ;
  s3.age = 21 ;
  strcpy(s3.name , "Rohan") ;
  s3.marks = 100 ; 
  printf("Name = %s \n" , s3.name) ; 
  printf("Age = %d \n" ,s3.age) ;
  printf("Marks = %d \n" , s3.marks) ; 
  return 0 ; 
}
