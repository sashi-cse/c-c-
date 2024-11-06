#include <iostream>
using namespace std;

int firstOccrance(int arr[], int size, int k){

    int s = 0;
    int e = size-1;
    int ans = -1;

    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == k){
           ans = mid;
           e = mid-1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else if(arr[mid]<k){
            s = mid+1;
        }
       mid = s+(e-s)/2; 
    }
    return ans;
}


int lastOccrance(int arr[], int size, int k){

    int s = 0;
    int e = size-1;
    int ans = -1;

    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == k){
           ans = mid;
           s = mid+1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else if(arr[mid]>k){
            s = mid+1;
        }
       mid = s+(e-s)/2; 
    }
    return ans;
}

int main(){
    
    int arr[7] = {1,2,3,3,3,4,5};
    int size = 7;
    int key = 3;

    cout << firstOccrance(arr, size, key) << endl;
    cout << lastOccrance(arr, size, key) << endl;
    

}