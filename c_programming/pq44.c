#include<stdio.h>
void reverse(int arr[],int n);
void printArr(int arr[],int n);

int main(){
    int arr[]={1,2,3,4,5,};
    revArr(arr,5);
    printArr(arr,5);
    return 0;
    
}
void revArr(int arr[],int n){
    for(int i=0;i<n/2;i++){
      int firstval=arr[i];
      int secondval=arr[n-i-1];
      arr[i]=secondval;
      arr[n-i-1]=firstval;

    }
}
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
