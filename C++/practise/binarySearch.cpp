#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int k){

    int s = 0;
    int e = size-1;

    int mid = s+(e-s)/2;

    while(s<e){
        
        if(arr[mid] > k){
            e = mid-1;
        }
        else if(arr[mid] < k){
            s = mid+1;
        }
        else{//arr[mid] == 0;y
            return mid;
        }
        mid = s+(e-s)/2;
    }
    return -1;

}

int main(){

    int arr[5] = {3,5,9,13,27};
    int key = 13;
    
    cout << binarySearch(arr, 5, key) << endl;

    
}