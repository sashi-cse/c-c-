#include<stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d", &number);
    if(number>=0){
        printf("positive ");
        if(number % 2 == 0){
            printf("even ");}
            else{printf("odd ");


            }
        
    }
    else{
        printf("negative");
        }
}