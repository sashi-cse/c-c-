#include<stdio.h>
#include<string.h>

struct student
  {
    int roll;
    float cgpa;
    char name[100];
  };
void printInfo(struct student s1);

int main(){
 struct student s1 = {2,9.2,"sashi"};
 printInfo(s1);
//initializing structure+ pointer to structure + Arrow opreator
//  struct student *ptr = &s1;
//  printf("student.roll with pointer %d\n",(*ptr).roll);
//  printf("student->roll  %d\n",ptr->roll);
//  printf("student->cgpa  %f\n",ptr->cgpa);
//  printf("student->name  %s\n",ptr->name);
 
   return 0;
}
void printInfo(struct student s1){
   printf("student information\n");
   printf("student roll  %d\n",s1.roll);
   printf("student cgpa  %f\n",s1.cgpa);
   printf("student name  %s\n",s1.name);
}

