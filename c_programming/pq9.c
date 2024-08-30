//write a program to check if a student passed or failed.
//marks > 30 pass
//marks <= 30 fail
#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks: ");
    scanf("%d", &marks);
    if(marks>30 && marks<=100){
        printf("PASS");
    }
    else if(marks<=30 && marks>=0){
        printf("FAIL");
    }
    else{
        printf("entered marks is not between 0 to 100");
    }
return 0;

    
}