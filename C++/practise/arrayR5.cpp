//find 2nd max
#include<iostream>
using namespace std;
void update(int arr[]){
    arr = 0;
}

int main(){
    int arr[6]={1,2,3,5,4,6};
    int max=arr[0];
    int i=0 ;
   for( ;i<6;i++){
        if(max<arr[i]){
            max=arr[i];
            arr[i]=max;
        } 
    }
    update(&arr[i]);
    cout<<arr[i]; 

    /*int i=0;
    while(i<6){
        if(max<arr[i]){
            max=arr[i];
            arr[i]=max;   
        } 
        i++;
    }
    cout<<"abc"<<arr[i]<<endl;*/
    
   
    
    
}