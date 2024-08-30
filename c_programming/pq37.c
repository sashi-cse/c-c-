#include<stdio.h>
int main(){
    float i = 100.00;
    float *ptr = &i;
    float **pptr = &ptr;
    printf("the value of i is: %f", **pptr);
    return 0;
}