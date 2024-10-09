#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;

    int i=0;
    while(i< n){
    
        int j=0;
        while(j<=i){
            count = count + 1 ;
            cout<< count <<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}