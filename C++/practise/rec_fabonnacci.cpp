#include<iostream>
using namespace std;

int fabonnaci(int n){

    //base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    //recursive function
    int term = fabonnaci(n - 1) + fabonnaci(n - 2);
    return term;
}

int main(){

    int n;
    cin >> n;

    cout << fabonnaci(n);

    return 0;
}