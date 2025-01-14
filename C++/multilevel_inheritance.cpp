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

class GermanShepherd: public Dog{

};

int main (){
    
    GermanShepherd g;
    g.speak();


    return 0;
}