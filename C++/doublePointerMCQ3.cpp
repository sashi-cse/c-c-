#include<iostream>
using namespace std;

int main(){

    int first = 8;
    int *p = &first;
    cout<<(*p)++<<" ";//use of post increment concept
    cout<<first<<endl;
} 