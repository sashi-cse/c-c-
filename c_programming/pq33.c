#include<stdio.h>
int calpercentage(int science,int math ,int sanskrit);
int main(){
    int science = 99;
    int math = 88; 
    int sanskrit = 90;
printf("%d", calpercentage(science,math,sanskrit));
}
int calpercentage(int science,int math,int sanskrit){
    return (science+math+sanskrit)/3;
}
    