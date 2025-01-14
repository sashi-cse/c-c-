#include<iostream>
using namespace std;
class Animal {
    public:
    int age;
    char level;

    public:
    void speak(){
        cout << "Speaking " << endl;
    }


};

class Dog : public Animal{
    public:
    int speed;
};

int main (){
    Dog Tiger;
    Tiger.speak();
    cout << Tiger.age << endl;


    return 0;
}