//find out the no of notes of 100,50,20,1
#include<iostream>
using namespace std;

int main(){
    int amount,Rs100,Rs50,Rs20,Rs1;
    cin>>amount;
    
    switch(1){
        case 1:Rs100 = amount/100;
        amount = amount%100;
        cout<<"The no Rs 100 note is "<<Rs100<<endl;

        case 2:Rs50 = amount/50;
        amount = amount%50;
        cout<<"The no Rs 50 note is "<<Rs50<<endl;

        case 3:Rs20 = amount/20;
        amount = amount%20;
        cout<<"The no Rs 20 note is "<<Rs20<<endl;

        case 4:Rs1 = amount/1;
        amount = amount%1;
        cout<<"The no Rs 1 note is "<<Rs1<<endl;
    } 

}