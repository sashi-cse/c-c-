#include<iostream>
using namespace std;
int factorial(int num){

    int fac = 1;
    for(int i=1;i<=num;i++){
        fac = fac * i;
    }
    return fac;
}

int nCr(int n, int r){
    int num = factorial(n);
    int den = factorial(r)*factorial(n-r);

    int ans = num/den;

    return ans;
}

int main(){
int n,r;
cin>>n>>r;

int a = nCr(n,r);
cout<<"The Answer is " << a <<endl;
}