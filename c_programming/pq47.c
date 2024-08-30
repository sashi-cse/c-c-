#include<stdio.h>
void PrintName(char arr[]);
int main(){
char firstName[]="SASHI";
char lastName[]="KANT";

printf(firstName);
printf(lastName);
return 0;
}
void PrintName(char arr[]){
    for(int i=0;arr[i]!='\0' ;i++){
        printf("%c",arr[i]);
    }
}