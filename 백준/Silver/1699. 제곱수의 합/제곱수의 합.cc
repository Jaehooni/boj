#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;
#define ll long long
int n;
int sqrt;
int square[1001];
int sqr[100001];
int output[100001];

int dp(int num, int s){
    if (output[num] <= num){
        return output[num];
    }

    if (s == 1){
        output[num] = num;
        return output[num];
    }

    int a = num - (s * s);
    int b = s * s;

    output[num] = min(dp(a, sqr[a]) + dp(b, sqr[b]), dp(num, s - 1));
    return output[num];
}

int main(){
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        if ((sqrt + 1) * (sqrt + 1) <= i){
            sqrt++;
        }
        sqr[i] = sqrt;
    }

    for (int i = 1; i <= n; i++){
        output[i] = i + 1;
    }

    for (int i = 1; i * i <= n; i++){
        output[i * i] = 1;
    }
    
    for (int i = 1; i <= n; i++){
        dp(i, sqr[i]);
    }

    printf("%d", output[n]);

    return 0;
}