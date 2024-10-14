/*
8. **Finding the Factorial of a Number**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Mathematical Computations  
   **Description**: Write a program to compute the factorial of a given number.  
   **Example**:  
   Input: `number = 5`  
   Output: `120`  
   Explanation: 5! (factorial) is 5 × 4 × 3 × 2 × 1 = 120. 
   */
  #include<iostream>
  using namespace std;
  int factorial(int num){
    int fac = 1;

    for(int i = 1;i <=num;i++){
        fac = fac*i;

    }
    return fac;
  }

  int main(){
    int n;
    cin>>n;

    cout<<"The factorial of the given no is: "<<factorial(n)<<endl;


  }