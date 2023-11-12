#include <cstdio>
#include <tuple>
#include <cmath>
using namespace std;
#define ll long long
int n, k, w, v, weight, value;
int backpack[101][100001];
tuple<int, int> items[101];

int main(){
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++){
        scanf("%d%d", &w, &v);
        items[i] = {w, v};
    }

    for (int i = 1; i <= n; i++){
        auto [ weight, value ] = items[i];

        for (int j = 1; j <= k; j++){
            if (j < weight){
                backpack[i][j] = backpack[i-1][j];
            }
            else{
                backpack[i][j] = max(backpack[i-1][j], backpack[i - 1][j - weight] + value);
            }
        
        }
    }

    printf("%d", backpack[n][k]);
    return 0;
}