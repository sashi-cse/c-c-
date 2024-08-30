#include<iostream>
using namespace std;

int main(){
/*
bool bl = true;
cout<< bl <<endl;

float f = 1.1;
int size = sizeof(f);
cout <<"the size of float data type is : "<< size << endl;
}
int a = 1;
int b = 2;

bool first = (a==b);
cout << first <<endl;
} */
char ch;
cin >> ch ;

if ( ch <= 'z' && ch >= 'a'){
    cout<<"entered value is lower case"<< endl;
}
else if ( ch <= 'Z' && ch >='A'){
    cout << "entered value is upper case" << endl;
}
else{
    cout << "entered value is Numeric"<< endl;
}


}