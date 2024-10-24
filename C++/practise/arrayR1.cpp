#include<iostream>
using namespace std;

int main(){
    int arr[6]={10,20,7,11,8,4};
    int a;
    cin>>a;

    for(int i=0;i<6;i++){
        if(arr[i]==a){
        cout<<i;
        }
    }
}