#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("test.txt","w");
    fprintf(fptr,"%c", 'M');

    return 0;
}