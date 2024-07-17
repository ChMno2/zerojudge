#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cout << "Case " << j+1 << ": ";
        int a, b;
        cin >> a >> b;
        int ct = 0;
        for (int i = a; i <= b; i++)
        {
            if (pow(i, 0.5) == int(pow(i, 0.5)))
                ct += i;
        }
        cout << ct << '\n';
    }
}
