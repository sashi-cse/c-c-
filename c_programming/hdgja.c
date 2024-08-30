#include<stdio.h>
int main(){
    int age;
    printf("enter the age: ");
    scanf("%d", &age);
    if(age >= 18){
        printf("adult\nthey can vote\nthey can drive");
    }
        else if(age >13 && age <18){
            printf("teenage");

        }
    
    else{
        printf("child");
    }

}
