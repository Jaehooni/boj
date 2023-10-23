#include <iostream>
using namespace std;
int gcd(int a, int b){
    int r = a % b;
    if (r != 0)
        return gcd(b,r);

    else
        return b;
}
int main(){
    int a,b,n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        cout << a * b / gcd(a,b) << '\n';
    }
    return 0;
}