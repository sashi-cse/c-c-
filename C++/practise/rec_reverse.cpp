#include<iostream>
using namespace std;

void reverse(string& s, int size, int i){
    //base case
    if(i>size-i-1)
        return;

    swap(s[i],s[size-i-1]);
    i++;

    reverse(s,size,i);
}

int main(){

    string s = "sashi";
    int size = 5;
    int i = 0;

    reverse(s, size, i) ;
    cout << s << endl;
}