#include<stdio.h>
int main(){
    char alphabet;
    printf("enter upper & lower case(A-Z)&(a-z): ");
    scanf("%c", &alphabet);
    if (alphabet >= 'A' && alphabet <='Z' )
    {
    printf("upper case");
    }
    else if (alphabet >= 'a' && alphabet <= 'z'){
        printf("lower case");
    }
    else{
        printf("not a english alphabet");
    }
    return 0;
}
