#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    bool pr = true;
    for (int i = 2; i < int(pow(n, 0.5) + 1); i++)
    {
        if (n % i == 0)
        {
            pr = false;
            break;
        }
    }
    if (pr)
        return true;
    else
        return false;
}

int func(int n, int s)
{
    if (prime(n + s) == true)
        return 0;
    else
        return func(n + s, s) + 1;
}
int main()
{
    int n;
    while (cin >> n && n)
    {
        if (prime(n) == true)
            cout << 0 << '\n';
        else
            cout << func(n, 1) + func(n, -1) + 2 << '\n';
    }
}
