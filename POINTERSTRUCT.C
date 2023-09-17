#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct student 
{
	char name[50];
	int age;
	char course[50];
	float cgpa;
                      
    struct student *nextptr;       
}*ststudent;

typedef struct student Student;

int main(){
	
	Student s1,s2,s3,*tmp;
	
	strcpy(s1.name, "Siti Aminah");
	s1.age=21;
	strcpy(s1.course, "Multimedia Computing");
	s1.cgpa=3.50;
	s1.nextptr=&s2;
	
	strcpy(s2.name, "Alif Zafran");
	s2.age=23;
	strcpy(s2.course, "Software Engineering");
	s2.cgpa=3.90;
	s2.nextptr=&s3;
	
	strcpy(s3.name, "Sophea Jane");
	s3.age=22;
	strcpy(s3.course, "Information Technology");
	s3.cgpa=3.50;
	s3.nextptr=NULL;
	  
      tmp = &s1;
      
      while(tmp != NULL)
      {
      printf(" Name = %s\n", tmp->name); 
	  printf(" Age = %d\n", tmp->age);
	  printf(" Course = %s\n", tmp->course);
	  printf(" CGPA = %.2f\n", tmp->cgpa);
      tmp = tmp->nextptr;   
	  printf("\n\n");            
     }
     
	 }

