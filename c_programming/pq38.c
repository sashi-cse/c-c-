#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main(){
    int x=3;int y=5;
    swap(x,y);
    printf("a=%d and b=%d\n",x,y);

    _swap(&x,&y);
    printf("a=%d and b=%d\n",x,y);
}
//call by value
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a=%d and b=%d\n",a,b);
}
//call by reference
void _swap(int *a, int *b){
int t = *a;
*a = *b;
*b = t;
printf("a=%d and b=%d\n",*a,*b);
}
