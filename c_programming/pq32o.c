// #include<stdio.h>
// float funCtoF(float c);
// int main(){
//     int c;
//     printf("enter the value of temp in C: ");
//     scanf("%d", &c);
//     printf("temp in F is: %f", funCtoF(c));
// }
// float funCtoF(float c){
//     float f = c*(9.0/5.0) + 32;
//     return f;
// }
#include<stdio.h>
float convertTemp(float celsius);
int main(){
    printf("far : %f", convertTemp(25));
    return 0;
}
float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}