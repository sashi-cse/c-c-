#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,5,4,6};
    int max=arr[0];
    int i=0 ;
   for( ;i<6;i++){
        if(max<arr[i]){
            max=arr[i];
            arr[i]=max;
        } cout<<i;
    }
    cout<<i;
    

}