#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=2;

    while(i<n){
        if(n%i==0){
            cout<<"entered number is not prime"<<endl;
        }
        else{
            cout<<"entered no is prime"<<endl;
        }
        i = i + 1;
    }
}