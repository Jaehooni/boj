#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
#define ll long long
int n, m, start, x, y;
int cur;
int map[1001][1001];
int visited[1001];
queue<int> q;

void dfs(int start){
    visited[start] = 1;
    printf("%d ", start);

    for (int i = 0; i <= 1000; i++){
        if (!visited[i] && map[start][i]){
            dfs(i);
        }
    }
}

int main(){
    scanf("%d%d%d", &n, &m, &start);
    q.push(start);
    for (int i = 0; i < m; i++){
        scanf("%d%d", &x, &y);
        map[x][y] = 1;
        map[y][x] = 1;
    }

    dfs(start);
    printf("\n");
    for (int i = 0; i <= 1000; i++){
        visited[i] = 0;
    }
    
    while(!q.empty()){
        cur = q.front();
        q.pop();
        visited[cur] = 1;

        printf("%d ", cur);

        for (int i = 0; i <= 1000; i++){
            if (!visited[i] && map[cur][i]){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
    return 0;
}