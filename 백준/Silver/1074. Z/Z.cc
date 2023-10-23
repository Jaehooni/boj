#include <cstdio>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;
#define ll long long
int n, r, c, result;


int bound(int row, int col, int n, int total){
    int rad = pow(2, n) / 2;
    int addit = pow(rad, 2);

    if (n == 0){
        return total;
    }
    if (row <= rad && col <= rad){
        return bound(row, col, n - 1, total);
    }
    if (row <= rad && col > rad){
        return bound(row, col - rad, n - 1, total + addit);
    }

    if (row > rad && col <= rad){
        return bound(row - rad, col, n - 1, total + addit * 2);
    }

    if (row > rad && col > rad){
        return bound(row - rad, col - rad, n - 1, total + addit * 3);
    }
}

int main(){
    scanf("%d%d%d", &n, &r, &c);

    result = bound(r + 1, c + 1, n, 0);
    printf("%d", result);

    return 0;
}
