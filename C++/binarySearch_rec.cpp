#include<iostream>
using namespace std;

void print(int arr[], int s, int e){

    for(int i=s; i<=e; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

bool binarySearch(int *arr, int s, int e, int k){
    cout << endl;
    print(arr,s,e);

    //base case
    if(s>e)
        return false;
    
    int mid = s + (e-s)/2;
    cout << " value of arr mid is " << arr[mid] << endl; 

    //element found
    if(arr[mid] == k){
        return true;
    }

    if(arr[mid] < k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1,k);
    }
}

int main(){

    int arr[6] = {2,4,6,10,14,18 };
    int size = 6;
    int key = 19 ;

    int s = 0;
    int e = 5;

    bool ans = binarySearch(arr, s, e, key);

    if(ans){
        cout << "Found" << endl;
    }

    else{
        cout << "Not Found" << endl;
    }


    return 0;
}