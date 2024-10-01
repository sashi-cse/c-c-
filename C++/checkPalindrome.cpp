//concept of reverse string used here 
#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];

    cout<<"Enter your name "<<endl;
    cin>>name;

    int len = getLength(name);
    cout<<" Length : "<<len<<endl;

    cout<<"Palindrome or Not: "<< checkPalindrome(name, len)<< endl;



    return 0;
}