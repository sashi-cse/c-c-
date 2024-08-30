#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of the number "<<endl;
    cin>>n;

    bool IsPrime=1;

    for(int i=2;i<n;i++){
        //rem=0,Not Prime
        if(n%i==0){
           // cout<<"The number is not prime";
            IsPrime=0;
            break;
        }
    }
    if(IsPrime==0){
        cout<<"The number is not prime";
    }
    else{
        cout<<"The number is prime";
    }
}