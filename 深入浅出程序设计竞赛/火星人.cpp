#include<iostream>
#include<algorithm>
using namespace std;
    int a[10010],n,m;

int main(){
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }

    do{
        next_permutation(a + 1, a + n + 1);
         
    }while(--m);
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
   
    return 0;
}