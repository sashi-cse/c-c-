#include<iostream>
using namespace std;

bool search(int arr[], int size, int k){

    //base case
    if(size == 0)
        return false;
    
    if(arr[0] == k)
        return true;

    bool ans = search(arr+1,size-1,k);

}

int main(){

    int arr[5] = {3,5,1,2,6};
    int key = 16;

    cout << search(arr,5,key) << endl;
}