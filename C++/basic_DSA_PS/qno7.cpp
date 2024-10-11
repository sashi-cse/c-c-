/*7. **Crafting Star Patterns**  
   **Difficulty**: Easy  
   **Topics**: Basic Programming, Patterns  
   **Description**: Write a program to create different star patterns (e.g., pyramid, diamond).  
   **Example**:  
   Input: `patternType = "pyramid", height = 5`  
   Output:  
   ```
       *
      ***
     *****
    *******
   *********
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){

        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        int j = 1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        // for(int j=2;j<=i;j++){
        //     cout<<"*";
        // }
        int k=2;
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
}
