#include <iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";}
}
    

int main(){
    int number[15];
    //accessing an array
    cout<<"number at the 15 index "<<number[14]<<endl;
    //initialisation an array
    int second[3] = {7,8,9};

    //accesing an element
    cout<<"Value of second index is "<<second[2]<<endl;

    // initialisationing all location with 0
    int n = 15;
    int third[15] = {1,2};
    PrintArray(third,15);
    cout<<endl;
    int thirdSize = sizeof(third)/sizeof(int);
    cout<<"Size of array third array is  "<<thirdSize<<endl;
    
    cout<<endl;

    int fourth[10]={0};
    PrintArray(fourth,10);
    cout<<endl;

    //initialisationing all the value with 1[it is not possible with below lines]
    int fifth[10]={1};
    int o = 10;
    PrintArray(fifth,10);
    cout<<endl;

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<"Size of fifth array is "<<fifthSize<<endl;

    char ch[5] ={'a','b','c','r','s' };
    cout<<ch[3]<<endl;
    for(int i = 0;i<5;i++){
    cout<<ch[i]<<" ";
    }
 
return 0;
}