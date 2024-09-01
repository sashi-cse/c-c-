#include<iostream>
using namespace std;
int SumArr(int arr[],int size){
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int input[100];

    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<"Sum of the all elements in the array is "<<SumArr(input,n)<<endl;
}
 
