#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){

    //base case
    if(size == 0)
        return 1;
    if(size == 1)
        return 1;

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1, size - 1);
        return ans;
    }
}

int main(){

    int arr[6] = {2,4,6,9,14,13};

    cout<<isSorted(arr,6);
}