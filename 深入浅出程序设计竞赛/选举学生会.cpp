#include<iostream>
using namespace std;
int n,m,tmp,a[1010]={0};
int main(){
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        cin >> tmp;
        a[tmp]++;
    }
    for(int i=1; i<=n; i++)
        for(int j=1; j<=a[i]; j++)
            cout << i << " ";
    return 0;
}