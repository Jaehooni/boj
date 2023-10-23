#include <iostream>
using namespace std;
int num;

int main(){
    cin >> num;
    for (int i = 1; i < num; i++){
        for (int j = 1; j <= num - i; j++){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << '\n';
    }
    for (int i = 1; i <= num; i++){
        cout << "*";
    }
    cout << '\n';
    for (int i = 1; i < num; i++){
        for (int j = 1; j <= i; j++){
            cout << " ";
        }
        for (int j = 1; j <= num - i; j++){
            cout << "*";
        }
        cout << '\n';
    }
    
    return 0;
}