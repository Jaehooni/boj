#include <iostream>
using namespace std;
bool find_decimal(int a){
    if (a == 1)
        return false;
    else if (a == 2)
        return true;
    else{
        for (int i = 2; i < a; i++){
            if (a % i == 0)
                return false;

            else if (i == (a-1))
                return true;
        }
    }
}
int main(){
    int a,b,n;
    n = 0;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> b;
        if (find_decimal(b))
            n += 1;
    }
    cout << n;
    return 0;
}
