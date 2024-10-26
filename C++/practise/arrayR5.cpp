//find 2nd max
#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,5,4,6};
    int max=arr[0];
    int max1=arr[0];
    int index;
   for(int i=0 ;i<6;i++){
        if(max<arr[i]){
            max=arr[i];
            index = i;
        } 
    }

 arr[index] = 0;
 cout<<arr[5];

 for(int i=0 ;i<6;i++){
        if(max1<arr[i]){
            max1=arr[i];
        } 
    }
   cout<<max1;
}