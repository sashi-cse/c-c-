#include <iostream>
using namespace std;
//Function Signature
void printCounting(int n){
//Function Boady
    for(int i = 1;i<=n;i++){
        cout<<i<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    //Function Call
    printCounting(n);

}