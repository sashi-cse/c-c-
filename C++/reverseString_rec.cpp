#include<iostream>
using namespace std;

void reverse(string& s, int i, int j){

    cout << "call recieved for " << s << endl;
    //base case 
    if(i>j){
        return ;
    }

    swap(s[i],s[j]);
    i++;
    j--;

    //Recursive call
    reverse(s,i,j);
}

int main(){

    string s = "sashi";
    cout << endl;
    reverse(s, 0, s.length()-1);
    cout << endl;
    cout << s << endl;
    return 0;
}