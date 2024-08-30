#include<stdio.h>
//2 x 3
int main(){
    int marks[2][3];//_ _ _|_ _ _
    marks[0][0]=89;
    marks[0][1]=98;
    marks[0][3]=88;

    marks[1][0]=79;
    marks[1][1]=88;
    marks[1][3]=98;

    printf("%d",marks[1][0]);
    return 0;
}