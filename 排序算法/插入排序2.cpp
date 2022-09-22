#include <iostream>
using namespace std;
int a[] = {8, 7, 6, 8, 5, 9, 4, 5, 8, 6, 9, 5, 7, 4, 5, 6, 8, 1, 2, 8};
int main()
{
    int n = sizeof(a) / sizeof(int);
    for (int i = 1; i < n; i++)
    {
        int now = a[i], j;
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > now)
                a[j + 1] = a[j];
            else
                break;
        }
        a[j + 1] = now;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
