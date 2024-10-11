/*
9. **Summing Digits of a Number**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Mathematical Computations  
   **Description**: Write a program to calculate the sum of digits of a number.  
   **Example**:  
   Input: `number = 1234`  
   Output: `10`  
   Explanation: The sum of the digits 1 + 2 + 3 + 4 = 10.
   */
#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int sum = 0;

    while(n!=0){
       int digit = n%10;
       sum = sum + digit;

       n = n/10;
    }
    cout<<sum;
}