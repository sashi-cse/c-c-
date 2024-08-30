#include<stdio.h>
int main(){
    int marks[3];
    
    printf("enter the marks of physics: ");
    scanf("%d",&marks[0]);

    printf("enter the marks of chemistry: ");
    scanf("%d",&marks[1]);

    printf("enter the marks of math: ");
    scanf("%d",&marks[2]);

    printf("phy=%d,chem=%d,math=%d",marks[0],marks[1],marks[2]);
    return 0;
}