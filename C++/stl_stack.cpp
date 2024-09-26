#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<string> s;

    s.push("Sashi");
    s.push("Kant");
    s.push("Singh");

    cout<<"Top Element-> "<<s.top()<<endl;

    s.pop();

    cout<<"Top Element after pop-> "<<s.top()<<endl;

    cout<<"Size of the stack-> "<<s.size()<<endl;

    cout<<"Empty or not: "<<s.empty()<<endl;
}