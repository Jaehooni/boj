#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#include <tuple>
#include <deque>
#include <string>
#include <unordered_map>
using namespace std;
#define ll long long
int n, m;
unordered_map<string, string> um;
string s1;
string s2;
char c[100];

deque<int> dq;

int main(){
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++){
        scanf("%s", c);
        string s1(c);
        sprintf(c, "%d", i);
        string s2(c);
        um[s1] = s2;
        um[s2] = s1;
    }

    for (int i = 0; i < m; i++){
        scanf("%s", c);
        string s1(c);

        printf("%s\n", um[s1].c_str());
    }
    return 0;
}