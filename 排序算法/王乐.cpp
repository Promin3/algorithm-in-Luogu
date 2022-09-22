#include <iostream>
using namespace std;
int main()
{
    char a;
    while (cin >> a)
    {
        if (a >= 65 && a <= 90)
        {
            a+=32;
            cout << a;
        }
        else cout << a;
    }
    return 0;
}