#include <iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j){

    //base case
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        return checkPalindrome(s, i+1, j-1);
    }
}

int main(){

    string s = "aabbccbbaa";
    cout << checkPalindrome(s, 0, s.length()-1) << endl;

    return 0;
}