#include<iostream>
using namespace std;

class Hero {

    //properties
    private:
    int health;

    public:
    char level;

    Hero(){
        cout << "Consturctor Called" << endl;
    }

    //Parameterised constructor
    Hero(int health) {
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health; 
    }

    //copy constructor
    Hero(Hero& temp) {
        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

};

int main(){

    Hero S(70,'C');
    S.print();


    //Copy Constructor
    Hero R(S);
    R.print();












    // //object created statically
    // Hero ramesh(10);
    // //cout << "Address of ramesh: "<< &ramesh << endl;
    // ramesh.print();

    // //dynamically 
    // Hero *h = new Hero(11);
    // h->print();
    
    // Hero temp(22, 'B');
    // temp.print();






    /*
    //static allocation
    Hero a;
    a.setHealth(88);
    a.setLevel('B');
    cout << "level is " << a.level << endl;
    cout << " health is " << a.getHealth() << endl;

    //dynamically
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl;

    cout << "level is " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;
    */

    // //creation of object
    // Hero ramesh;
    // cout << "Ramesh health is "<< ramesh.getHealth() << endl;
    // //use setter
    // ramesh.setHealth(70);

    // //ramesh.health = 70;
    // ramesh.level = 'A';

    // cout << "health is: " << ramesh.getHealth() << endl;
    // cout << "level is: " << ramesh.level << endl;

    // //cout << "size : " << sizeof(h1) << endl;


    return 0; 
}