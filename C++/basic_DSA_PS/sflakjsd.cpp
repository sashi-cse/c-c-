#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    int n;
    cin >> n;
    int original = n;
    int rem = 0;
    int arr[10];
    int ans = 0;

    while (n > 0)
    {
        arr[rem] = n % 10;
        n = n / 10;
        rem = rem + 1;
    }
    for (int i = rem - 1; i >= 0; i--)
    {
        cout << " " << arr[i];
        ans += arr[i] * arr[i] * arr[i];
        
    }cout<<endl;
    cout<<ans;
    if (ans == original)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}


class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;

        while(n!=0){
            int digit = n%10;
            prod = prod * digit;
            sum = sum + digit;

            n=n/10;
        }
        int answer = prod - sum;
        return answer;
        
    }
};
