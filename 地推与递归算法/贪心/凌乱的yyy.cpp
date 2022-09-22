#include <iostream>
#include <algorithm>
using namespace std;

int n, ans ,final=0;
struct game
{
    int l, r;
} a[100010];

bool cmp(game a, game b)
{
    return a.r < b.r;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].l >> a[i].r;
    }

    sort(a + 1, a + 1 + n, cmp);

    for (int i = 1; i <= n; i++)
    {
        if(final <= a[i].l){
            final = a[i].r;
            ans ++;
        } 
    }

    cout << ans;
    return 0;
}