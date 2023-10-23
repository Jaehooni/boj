#include <iostream>
using namespace std;
int sum;
int s = 10001;
int main(){
    int a,b;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        for (int j = 1; j <= i; j++){
            if (i / j == j && i % j == 0){
                sum += i;
                if (i <= s)
                    s = i;
            }
        }
    }
    if (sum == 0)
        cout << -1;
    else
        cout << sum << '\n' << s;
    return 0;
}