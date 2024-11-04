#include<iostream>
using namespace std;

int getSum(int arr[], int size){
    //base case
    if(size == 0)
        return 0;
    
    if(size == 1)
        return arr[0];

    int sum = arr[0] + getSum(arr+1, size-1);
    return sum;
}

int main(){

    int arr[5] = {3, 2, 5, 1, 6};
    int size = 5;

    int sum = getSum(arr, size);

    cout<< " sum is " << sum << endl;


    return 0;
}