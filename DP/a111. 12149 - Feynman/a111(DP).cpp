#include <bits/stdc++.h>
using namespace std;
vector<long long> dp(105, -1);
long long DP(int n)
{
    if (dp[n] != -1)
        return dp[n];
    else
    {
        dp[n] = n * n + DP(n - 1);
        return dp[n];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    dp[1] = 1;
    while (cin >> n && n)
    {
        cout << DP(n) << '\n';
    }
}

