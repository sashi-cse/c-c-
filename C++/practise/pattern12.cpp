#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;

    int i=1;
    while(i<=n){
        
        int j=1;
        while(j<=n){
            char ch  = count + 'A';
            cout<< ch  <<" ";
            j++;
            count++;
            
        }
        cout<<endl;
        i++;
        
    }
}