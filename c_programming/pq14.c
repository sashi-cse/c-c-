//print the numbers from 0 to n , if n is given by the user. n=4
#include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d", &n);

//     int i=0;
//     while(i<=n){
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }
// by use of for loop
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    for(int i = 0; i<=n ; i++){
        printf("%d\n", i);
    }

}