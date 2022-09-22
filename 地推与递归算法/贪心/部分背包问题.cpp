#include <iostream>
#include <algorithm> //sortÅÅÐòËã·¨
using namespace std;

struct coin
{
    int m, v;
} a[105];

bool cmp(coin a, coin b)
{
    return a.v * b.m > a.m * b.v;
}

int main()
{
    int n, t, c;
    float ans = 0;
    scanf("%d%d", &n, &t);
    c = t;
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &a[i].m, &a[i].v);
    }
    sort(a, a + n, cmp);
    int j ;
    for( j = 0; j< n; j++){
        if(a[j].m > c) break;
        c -= a[j].m;
        ans += a[j].v;
    }
    if(j < n)
    ans += 1.0*c / a[j].m  *a[j].v;
    printf("%.2f",ans);
    return 0;
}