#include<iostream>
using namespace std;

//rotate by 1
int main(){
    int arr[6]={10,20,7,11,8,4};
    cout<<arr[5];

    for(int i = 5; i>=0; i--){
        arr[i] = arr[i-1];
    }
    
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
}