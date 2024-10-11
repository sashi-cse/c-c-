/*
3. **Validating Leap Years**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Date Handling  
   **Description**: Write a program to check if a given year is a leap year.  
   **Example**:  
   Input: `year = 2020`  
   Output: `Leap Year`  
   Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.  
   */

  #include<iostream>
  using namespace std;

  int main(){
    int n;
    cin>>n;

    if(n%4==0 && n%100!=0){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }
  }