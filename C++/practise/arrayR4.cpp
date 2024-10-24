//missing number
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int arr1[5]={1,2,3,4};
    for(int i=0;i<5;i++){
        if(arr[i]!=arr1[i]){
            cout<<arr[i];
        }
    }
}