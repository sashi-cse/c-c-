#include <iostream>
using namespace std;

int firstOcc(int arr[], int s, int e, int k){
    //base case
    if(s>e)
        return -1;
    
    int mid = s+(e-s)/2;
    if(arr[mid] == k){
        int left = firstOcc(arr,s,mid-1,k);
        if(left==-1)
            return mid;
        else
            return left;
    }
    else if(arr[mid] > k){
        return firstOcc(arr,s,mid-1,k);
    }else{
        return firstOcc(arr,mid+1,e,k);
    }
}
int main(){

    int arr[7] = {1, 2, 3, 3, 3, 4, 5};
    int s = 0;
    int e = 6;
    int key = 3;

    cout << firstOcc(arr,s,e,key) << endl;
}