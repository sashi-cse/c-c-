#include <iostream>
using namespace std;

int main(){
    int j=3;
    int a=2;

    int sum = a +(j++) ;
    cout<<sum<<endl;
    int rum = sum +(j++);
    cout<<rum<<endl;

    int i=7;
    cout<<(++i)<<endl;//8
    cout<<(i++)<<endl;//8 i=9
    cout<<(i--)<<endl;//i=9,i=8
    cout<<(--i)<<endl;//7


}