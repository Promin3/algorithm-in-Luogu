#include <iostream>
#include <algorithm>
using namespace std;

struct people
{
    int num, time;
} a[1005];

bool cmp(people a, people b)
{
    if (a.time != b.time)
        return a.time < b.time;
    return a.num < b.num;
}

int n, sum = 0;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].time;
        a[i].num = i;
    }

    sort(a + 1, a + n + 1, cmp);//a[0] = null;

    for (int i = 1; i <= n; i++)
    {
        cout << a[i].num << " ";
        sum += i*a[n-i].time;
    }

    printf("\n%.2lf", 1.0 * sum / n);
    return 0;
}