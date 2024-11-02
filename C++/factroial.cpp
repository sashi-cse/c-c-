#include<iostream>
using namespace std;

int factorial(int n){

    //base case
    if(n == 0)
    return 1;

    int smallProblem = factorial(n-1);
    int BigProblem = n * factorial(n-1) ;

    return BigProblem ;
}

int main(){

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}