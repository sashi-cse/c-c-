#include<stdio.h>
#include<string.h>

typedef struct entreAdress {
    int houseno;
    int block;
    char city[10];
    char state[10];
} Adr;
 int main(){
    Adr p1;
    strcpy(p1.city,"haridwar");
    strcpy(p1.state,"uttrakhand");
    p1.houseno = 1;
    p1.block = 1; 

    printf("Adress of the person 1\n") ;
    printf("city is %s\nstate is %s\nhouse no is %d\nblock is %d\n",p1.city,p1.state,p1.houseno,p1.block);

    // Adr p2;
    // strcpy(p2.city,"nanital");
    // strcpy(p2.state,"uttrakhand");
    // p2.houseno = 2;
    // p2.block = 13; 

    // printf("Adress of the person 2") ;
    // printf("city is %s\n,state is %s\n,house no is %d\n,block is %d\n");


 }