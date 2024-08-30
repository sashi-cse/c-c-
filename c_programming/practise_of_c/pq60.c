#include<stdio.h>

typedef struct BankaAccount{
    int accountNo;
    char name[100];  
}acc;
int main(){
    acc acc1 = {123,"Sashi"};
    acc acc2 = {124,"Shreya"};
    acc acc3 = {125,"Somaya"};

    printf("account no is %d\n",acc1.accountNo);
    printf("name is %s\n",acc1.name);
    return 0;
}