#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#include <tuple>
#include <deque>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
#define ll long long
int n;
ll ans;


int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        ans += (n / i) * i;
    }

    printf("%lld", ans);
    return 0;
}