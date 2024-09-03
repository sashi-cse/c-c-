#include<iostream>
using namespace std;

int main(){
    int ans = 0;
    int size=7;
    int arr[7]={2,3,1,6,3,6,2};

    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    cout<<ans<<endl;
}