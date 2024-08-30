#include<stdio.h>
int main(){
    char day;//1-monday,2-tuesday,3-wednesday,4-thruesday,5-friday,6-saturday,7-sunday
    printf("enter the day(1-7): ");
    scanf("%d", &day);
    switch(day){
        case 1: printf("monday");
        break;
        case 2: printf("tuesday");
        break;
        case 3: printf("wednesday");
        break;
        case 4: printf("thrusday");
        break;
        case 5: printf("friday");
        break;
        case 6: printf("saturday");
        break;
        case 7: printf("sunday");
        break;
        default: printf("invalid day");

    }

}