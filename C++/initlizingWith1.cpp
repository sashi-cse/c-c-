#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[100];
    fill_n(array,100,1);

    for(int i = 0;i<n;i++){
        cout<<array[i]<<endl;
    }
    
}
 