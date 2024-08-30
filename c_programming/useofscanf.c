#include<stdio.h>
//adding of two number using scanf
int main(){
    int a,b ;
    printf("enter the value of a");
    scanf("%d",&a);

    printf("enter the value of b");
    scanf("%d",&b);

    int sum = a + b;
    printf("the sum is %d",sum);
    return 0;

}