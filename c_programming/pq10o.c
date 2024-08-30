#include<stdio.h>
int main(){
    int no;
    printf("enter the no: ");
    scanf("%d", &no);
    if (no<30)
    {printf("C");
    }
    else if (no>=30 && no<70)
    {
    printf("B");
    }
    else if (no>=70 && no<90)
    {
        printf("A");
    }
    else
    {
       printf("A+");
    }
    return 0;
}

    
    
    
    
