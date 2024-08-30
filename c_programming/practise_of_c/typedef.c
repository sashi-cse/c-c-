#include<stdio.h>
#include<string.h>

typedef struct student {
    char name[100];
    int roll;
    float cgpa;
} stu;

typedef struct computerEngineeringstudent{
    char name[100];
    int roll; 
    float cgpa;
} coe;

int main(){
    coe s1;
    strcpy(s1.name,"sashi");
    s1.roll = 1;
    s1.cgpa = 10.0;
    printf("student name is %s",s1.name);
    return 0;

}