// #include<stdio.h>
// int countlength(int arr[]);
// int main(){
//     char name[100];
//     fgets(name,100,stdin);
//     printf("length is : %d",countlength(name));
//     return 0;
// }
// int countlength(int arr[]){
//     int count=0;
//     for(int i=0;arr[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
#include<stdio.h>
int main(){
    char name[]="SASHI";
    
    printf("%d",strlen(name));
return 0;
}