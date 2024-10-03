#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the alphanumeric value: "<<endl;
    char n;
    cin>>n;

    if(n>='a'&&n<='z'){
        cout<<"This is LowerCase"<<endl;
    }
    else if(n>='A'&&n<='Z'){
        cout<<"This is UpperCase"<<endl;
    }
    else
    {
        cout<<"This is Numeric"<<endl;
    }
}