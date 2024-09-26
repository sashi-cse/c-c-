#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> q;

    q.push("Sashi");
    q.push("Kant");
    q.push("Singh");
    cout<<"size of queue before pop->"<<q.size()<<endl;
    cout<<"First Element-> "<<q.front()<<endl;

    q.pop();

    cout<<"First Element after pop-> "<<q.front()<<endl;

    cout<<"Size of queue after pop-> "<<q.size()<<endl;
}