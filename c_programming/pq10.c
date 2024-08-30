#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks(1-100): ");
    scanf("%d", &marks);
    if(marks < 30){
        printf("C");
    }
    else if ( marks >=30 && marks <70){
        printf("B");
    }
    else if( marks >=70 && marks <90 ){
         printf("A");
    }
     else {
         printf("A+");
    }
    
    return 0;
}