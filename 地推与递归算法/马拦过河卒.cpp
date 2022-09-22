#include<iostream>
#define maxn 22
using namespace std;

long long f[maxn][maxn] = {1};
int n, m, ctrl[maxn][maxn], hx, hy;
int d[9][2] = {{0,0}, {-2,-1}, {-1,-2}, {1,-2}, {2,-1}, {2,1}, {1,2}, {-1,2}, {-2,1}};

int main(){
    cin >> n >> m >> hx >> hy;
    for(int i = 0; i < 9; i++){
        int tmpx = hx + d[i][0];
        int tmpy = hy + d[i][1];
    if(tmpx >= 0 && tmpx <=n && tmpy >=0 && tmpy <=m)
        ctrl[tmpx][tmpy] = 1;
    }

   if(ctrl[0][0] == 1) f[0][0] = 0;

    for(int i = 0; i <= n ;i++)
        for(int j = 0; j <= m; j++){
            if(ctrl[i][j])continue;
            if(i != 0) f[i][j] += f[i - 1][j];
            if(j != 0) f[i][j] += f[i][j - 1];
        }

        cout << f[n][m];

    return 0;
}