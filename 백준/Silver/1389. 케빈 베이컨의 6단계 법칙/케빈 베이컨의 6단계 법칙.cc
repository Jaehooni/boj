#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#include <stack>
#include <tuple>
using namespace std;
#define ll long long
int n, m, x, y, start, sum;
int graph[101][101];
int kevin_num[101][101];
tuple<int, int> total;

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++){
        scanf("%d%d", &x, &y);
        graph[x][y] = 1;
        graph[y][x] = 1;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == j) kevin_num[i][j] = 0;
            else if (graph[i][j]) kevin_num[i][j] = 1;
            else kevin_num[i][j] = 2e8;
        }
    }

    for (int k = 1; k <= n; k++){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                kevin_num[i][j] = min(kevin_num[i][j], kevin_num[i][k] + kevin_num[k][j]);
            }
        }
    }

    get<0>(total) = n + 1;
    get<1>(total) = 2e9;
    for (int i = n; i >= 1; i--){
            sum = 0;
        for (int j = 0; j <= n; j++){
            sum += kevin_num[i][j];
        }

        if (sum <= get<1>(total)){
            get<0>(total) = i;
            get<1>(total) = sum;
        }
    }

    printf("%d", get<0>(total));

    return 0;
}
