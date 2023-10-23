#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
int n, m, b, r;
int button[10];
int total = 2e9;

void dp(int digit, int num, int press){

    if (digit == 7){
        if (num == 0 && button[0]){
            total = min(total, n + 1);
        }
        return;
    }

    if (digit == 0){
        for (int i = 1; i < 10; i++){
            if (button[i]){
                total = min(total, abs(n - i) + press + 1);
                dp(digit + 1, i, press + 1);

            }
        }
    }

    for (int i = 0; i < 10; i++){
        if (button[i]){
            total = min(total, abs(n - (num * 10 + i)) + press + 1);
            dp(digit + 1, num * 10 + i, press + 1);
        }
    }

}

int main(){
    scanf("%d", &n);
    scanf("%d", &m);

    for (int i = 0; i < 10; i++){
        button[i] = 1;
    }

    for (int i = 0; i < m; i++){
        scanf("%d", &b);
        button[b] = 0;
    }

    dp(0, 0, 0);
    total = min(total, abs(n - 100));
    printf("%d", total);

    return 0;
}
