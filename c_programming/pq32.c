#include<stdio.h>
void printHello(int count);
int main(){
    printHello(5);
    return 0;
}
void printHello(int count){
    if (count==0)
    {
        return;
    }
    
    printf("hello world\n");
    printHello(count-1);
}