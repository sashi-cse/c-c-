// #include<iostream>
// using namespace std;

// int main(){
//     int arr[100]={4,12,8,10};
//     int max = arr[0];

//     for(int i=0;i<4;i++){
//         if(max<arr[i]){
//             max = arr[i];
            
//         }
//         else{
//             cout<<max;
//         }
//     }
//     cout<<max<<endl;
// }

#include<iostream>
using namespace std;

int main() {
    int arr[100] = {4, 12, 8, 10};
    int max = arr[0];

    for (int i = 0; i < 4; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if arr[i] is greater
        }
    }

    cout << "Maximum value: " << max << endl;

    return 0;
}