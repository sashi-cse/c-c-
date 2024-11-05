#include<iostream>
using namespace std;

bool binarySearch(int arr[],   int k, int s, int e){

    //base case
    if(s > e )
        return false;

    int mid = s+(e-s)/2;
    if(arr[mid] == k)
        return true;

    if(mid > k){
        bool ans = binarySearch(arr, k, s, mid-1);
        return ans;
    }
    else{
        bool ans1 = binarySearch(arr, k, mid+1, e);
        return ans1;
    }
}

int main(){

    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 19;
    int s = 0;
    int e = 5;

    cout << binarySearch(arr,   key, s, e) << endl;
}