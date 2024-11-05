#include<iostream>
using namespace std;

void printNumber(int n){

    //base case
    if(n == 0){
        return;
    }
    
    //recursive function
    printNumber(n-1);

    cout << n << endl;
    
}

int main(){

    int n;
    cin >> n;

    cout << endl;

  printNumber(n)  ;



  return 0;
}