#include <iostream>
using namespace std;
long long f[25][25][25];
long long w(long long a, long long b, long long c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (a > 20 || b > 20 || c > 20)
        return w(20, 20, 20);
    else if (f[a][b][c] != 0)
        return f[a][b][c];
    else if (a < b && b < c)
        f[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    return f[a][b][c];
}
int main()
{
    long long a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a == -1 && b == -1 && c == -1)
            break;
        cout << "w(" << a << "," << b << "," << c << ") =";
        cout << w(a, b, c) <<endl;
    }
    return 0;
}