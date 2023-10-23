#include <cstdio>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int b,c,d = 1;
bool check = true;
stack<int> s;
vector<char> v;
int main(){
    scanf("%d",&b);
    for (int i = 0; i < b; ++i){
        scanf("%d",&c);
        while(d <= c){
            s.push(d);
            v.push_back('+');
            d += 1;
        }
        if (c == s.top()){
            s.pop();
            v.push_back('-');
        }
        else
            check = false;
    }
    if (check){
        for (int j = 0; j < v.size(); ++j)
            printf("%c\n",v[j]);
    }
    else
        printf("NO");
    return 0;
}