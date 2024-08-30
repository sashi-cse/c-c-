#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int raw = 1;

    while(raw<=n){
        int col=1;
        char start = 'A'+n-raw;

        while(col<=raw){
            cout<<start;
            start= start + 1;
            col = col + 1;
        }
        cout<<endl;
        raw = raw + 1;
    }
}
