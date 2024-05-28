#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n_prime;
    bool isprime;
    while (cin >> a >> b)
    {
        n_prime = 0;
        if (a <= 1)
        {
            a = 2;
        }
        if (b < a)
        {
            cout << n_prime << '\n';
            continue;
        }
        for (int i = a; i <= b; i++)
        {
            isprime = true;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    isprime = false;
                    break;
                }
            }
            if (isprime)
                n_prime++;
        }
        cout << n_prime << '\n';
    }
}
