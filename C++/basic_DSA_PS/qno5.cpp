/*
5. **Generating the Fibonacci Series**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Sequences  
   **Description**: Write a program to generate the Fibonacci series up to a given number.  
   **Example**:  
   Input: `limit = 10`  
   Output: `[0, 1, 1, 2, 3, 5, 8]`  
   Explanation: The Fibonacci series up to 10 is generated as [0, 1, 1, 2, 3, 5, 8]. 
   */
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

int a=0;
int b=1;
cout<<a<<" "<<b<<" ";

for(int i=1;i<=n-2;i++){
    int nextNumber = a+b;
    cout<<nextNumber<<" ";

    a=b;
    b=nextNumber;
}

}