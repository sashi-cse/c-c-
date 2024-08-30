#include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     printf("%u\n",ptr);
//     ptr++;
//     printf("%u",ptr);
//     return 0;

// }
#include<stdio.h>
int main(){
    int age = 22;
    int _age = 24;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("%u,%udifference=%u\n",ptr,_ptr,ptr-_ptr);
    _ptr = &age;
    printf("comparision=%u",*ptr==*_ptr);
    return 0;

}