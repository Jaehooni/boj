#include <iostream>
using namespace std;
int a;
int main(){
    cin >> a;
    for (int i = 1; i <= a; ++i){
        for (int j = 1; j <= a; ++j)
            cout << "*";
        if (i != a)
            cout << '\n'; 
    }
    return 0;
}