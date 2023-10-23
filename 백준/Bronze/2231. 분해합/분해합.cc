#include <iostream>
using namespace std;
int n;

int main(){
    cin >> n;

    for (int i = n - 54; i <= n; i++){
        if (i + i / 100000 + i / 10000 % 10 + i / 1000 % 10 + i / 100 % 10 + i / 10 % 10 + i % 10 == n){
            cout << i;
            break;
        }

        if (i == n)
            cout << 0;
    }

    return 0;
}
