#include<iostream>
using namespace std;

void printSum(int arr[][3], int row, int col ){
    cout<<"Printing the sum col wise"<<endl;
    for(int col=0; col<3; col++){
        int sum=0;
        for(int row=0; row<3; row++){
            sum+= arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[3][3];

    cout<<"Enter the elements "<< endl;

    //taking elements row wise
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

    cout<< "Printing the array " <<endl;
    //printing
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }cout<<endl;

    printSum(arr,3,3);

    return 0;
}