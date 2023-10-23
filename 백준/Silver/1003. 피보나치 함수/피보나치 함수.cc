#include <cstdio>
#include <algorithm>
#include <tuple>
using namespace std;
#define ll long long
int t, n;
tuple<int, int> mem[41];
tuple<int, int> tmp;
void fibonacci(int n) {
    if (n == 0) {
        return;
    } 

    if (n == 1) {
        return;

    if (get<0>(mem[n]) || get<1>(mem[n])){
        return;
    }

    } else {
        get<0>(mem[n]) = get<0>(mem[n-1]) + get<0>(mem[n-2]);
        get<1>(mem[n]) = get<1>(mem[n-1]) + get<1>(mem[n-2]);
    }
}

int main(){
    scanf("%d", &t);
    get<0>(mem[0]) = 1;
    get<1>(mem[1]) = 1;

    for (int i = 0; i <= 40; i++){
        fibonacci(i);
    }
    
    for (int i = 0; i < t; i++){
        scanf("%d", &n);
        printf("%d %d\n", get<0>(mem[n]), get<1>(mem[n]));
    }
    return 0;
}