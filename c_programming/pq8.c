//it's sunday and it's snowing-true 
//it's monday or raining - true
//if a number is greater than 9 and less than 100(0 means less than 9 and 1 means greater than 9 and less than 100)
#include<stdio.h>
int main(){
    int issunday = 1;
    int issnowing = 1;
    printf("%d\n", issunday && issnowing);
    int ismonday = 0;
    int israining = 1;
    printf("%d\n", ismonday || israining);
    printf("enter the number");
    int x;
    scanf("%d", &x );
    printf("%d", x>9 && x<100);
    return 0;

}