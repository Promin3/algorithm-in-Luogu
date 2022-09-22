#include <iostream>
using namespace std;
int main()
{
    char a[100];
    cin >> a;
    int num = sizeof(a);
    for (int i = 0; i < num; i++)
    {
        if (a[i] <= 90 && a[i] >= 65)
            a[i] += 32;
        cout << a[i];
    }
    return 0;
}