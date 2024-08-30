#include<stdio.h>
struct complex{
    int real;
    int img;
};
int main(){
    struct complex number1 = {5,8};
    struct complex *ptr = &number1;
    printf("real part is %d\n",ptr->real);
    printf("img part is %d\n",ptr->img);
    return 0;
}