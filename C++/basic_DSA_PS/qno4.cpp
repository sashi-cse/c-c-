/*
4. **Calculating Armstrong Numbers**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Number Theory  
   **Description**: Write a program to check if a number is an Armstrong number.  
   **Example**:  
   Input: `number = 153`  
   Output: `Armstrong Number`  
   Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.  
   */
  #include<iostream>
  #include<math.h>
  using namespace std;

  int main(){
    int n;
    cin>>n;

    int j,k,l,m,o,p;

    j = n%10;
    k = n/10;

    l = k%10;
    m = k/10;

    o = m%10;
    p = m/10;

    int ans = j*j*j + l*l*l + o*o*o;

    if(ans==n){
        cout<<"Yes"; 
    }
    else
    {
        cout<<"No";
    }
    
  }