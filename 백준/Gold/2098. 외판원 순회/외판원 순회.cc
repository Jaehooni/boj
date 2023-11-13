#include <cstdio>
#include <algorithm>
// #include <tuple>
// #include <cmath>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// #include <tuple>
// #include <deque>
// #include <vector>
// #include <string>
// #include <unordered_map>

using namespace std;
#define ll long long
int n, c;
int map[16][16];
int dp[16][1 << 16];


int travel(int cur, int visit){
    
    if (visit == (1 << n) - 1){
        if (map[cur][0] == 0){
            return 2e9;
        }
        return map[cur][0];
    }

    if (dp[cur][visit] != -1) return dp[cur][visit];

    dp[cur][visit] = 2e9;

    for (int i=0; i<n; i++){
        if (map[cur][i] != 0 && ((visit & (1 << i)) != (1 << i))){
            dp[cur][visit] = min(dp[cur][visit], map[cur][i] + travel(i, visit | 1 << i));
        }
    }
    
    return dp[cur][visit];
}

int main(){
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &c);
            map[i][j] = c;
        }
    }

    for (int i = 0; i < 16; i++){
        for (int j = 0; j < 1 << 16; j++){
            dp[i][j] = -1;
        }
    }

    printf("%d", travel(0, 1));
    return 0;
}