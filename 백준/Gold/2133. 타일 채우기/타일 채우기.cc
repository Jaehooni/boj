#include <iostream>
using namespace std;
int d[31] = {1,0,3,0};
int a;
int main(){
    cin >> a;
    for (int i = 4; i <= a; ++i){
        if (i % 2 == 0){
            for (int j = 2; j < i; j+=2){
                if (j == 2)
                    d[i] += 3 * d[i-j];
                else
                    d[i] += 2 * d[i-j];
            }
            d[i] += 2;
        }
        else
            d[i] = 0;
    }
    cout << d[a];
    return 0;
}