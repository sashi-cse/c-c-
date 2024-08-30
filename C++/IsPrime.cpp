#include <iostream>
using namespace std;

bool IsPrime(int n){
    for(int i = 2; i<n;i++){
        //condition for not prime no.
        if(n%i==0){
            return 0;
        }
    }
    return 1;

}

int main(){
    int n;
    cin>>n;

    if(IsPrime(n)){
        cout<<"is a prime number";
    }
    else{
        cout<<"is not a prime number";
    }

}