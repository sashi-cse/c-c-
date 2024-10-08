#include<iostream>
#include<climits>
using namespace std;

int largestRowSum(int arr[][3], int row, int col){

    int maxi = INT_MIN;
    int rowIndex=-1;

    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<3; col++){
            sum+= arr[row][col];
        }
        
        if(sum > maxi){
            maxi = sum;
            rowIndex = row; 
        }
    }
    cout<<"the maximum sum is "<< maxi <<endl;
    return rowIndex;
}

int main(){

int arr[3][3];

cout<<"Enter the elements "<< endl;

    //taking the input row wise 
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

     cout<< "Printing the array " <<endl;
    //print
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }



cout<<"Max row is at Index "<<largestRowSum(arr,3,3)<<endl;

return 0;
}